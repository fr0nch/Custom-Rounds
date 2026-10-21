#!/usr/bin/env bash
set -e

MODE="release"
USE_DOCKER=0
IMAGE="steamrt-go-builder"

# Manifest and files from assets/ to copy next to the library
MANIFEST="customrounds.pplugin"
ASSETS=(
  # "assets/config.json"
)

for arg in "$@"; do
  case "$arg" in
    debug|release) MODE="$arg" ;;
    --docker) USE_DOCKER=1 ;;
  esac
done

if [ "$USE_DOCKER" = "1" ]; then
  if ! docker image inspect "$IMAGE" >/dev/null 2>&1; then
    echo "Image $IMAGE not found, building it..."
    docker build -t "$IMAGE" .
  fi

  docker run --rm \
    --platform linux/amd64 \
    --user "$(id -u):$(id -g)" \
    -v "$(pwd):/app" \
    -w /app \
    "$IMAGE" "$MODE"
  exit 0
fi

NAME=$(jq -r '.name' "$MANIFEST")
ENTRY=$(jq -r '.entry' "$MANIFEST")
FILENAME=$(basename "$ENTRY")
FILENAME=${FILENAME#lib}

VERSION=$(jq -r '.version' "$MANIFEST")

if [ "$MODE" = "debug" ]; then
  GIT_HASH=$(git rev-parse --short HEAD 2>/dev/null || true)
  if [ -n "$GIT_HASH" ]; then
    VERSION="${VERSION}-dev+git.$GIT_HASH"
  else
    VERSION="${VERSION}-dev+$(date +%Y%m%d)"
  fi
fi

OUTDIR="build/$MODE"
mkdir -p "$OUTDIR"

echo "Building $NAME v$VERSION ($MODE)"

jq --arg version "$VERSION" \
'.version = $version' "$MANIFEST" > "$OUTDIR/$FILENAME.pplugin"

GOFLAGS=()
LDFLAGS=""

if [ "$MODE" = "debug" ]; then
  GOFLAGS+=(-tags=debug -gcflags=all='-N -l')
else
  LDFLAGS="-s -w"
  GOFLAGS+=(-trimpath)
fi

go build \
  -buildmode=c-shared \
  "${GOFLAGS[@]}" \
  -ldflags="$LDFLAGS" \
  -o "$OUTDIR/lib$FILENAME.so"

for asset in "${ASSETS[@]}"; do
  cp "$asset" "$OUTDIR/"
done

echo "Output:"
echo "$OUTDIR/lib$FILENAME.so"
echo "$OUTDIR/$FILENAME.pplugin"
for asset in "${ASSETS[@]}"; do
  echo "$OUTDIR/$(basename "$asset")"
done
