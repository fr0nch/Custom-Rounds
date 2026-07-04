#!/usr/bin/env bash
set -e

MODE=${1:-release}

MANIFEST="assets/customrounds.pplugin"
RELEASE_MANIFEST=".github/release-please-manifest.json"

NAME=$(jq -r '.name' "$MANIFEST")

if [ -f "$RELEASE_MANIFEST" ]; then
  VERSION=$(jq -r '."."' "$RELEASE_MANIFEST")
else
  BASE_VERSION=$(jq -r '.version // "0.0.0"' "$MANIFEST")

  GIT_HASH=$(git rev-parse --short HEAD 2>/dev/null || true)
  if [ -n "$GIT_HASH" ]; then
    BUILD="+git.$GIT_HASH"
  else
    BUILD="+$(date +%Y%m%d)"
  fi

  VERSION="${BASE_VERSION}-dev${BUILD}"
fi

OUTDIR="build/$MODE"
mkdir -p "$OUTDIR"

echo "Building $NAME v$VERSION ($MODE)"

jq --arg version "$VERSION" \
'.version = $version' "$MANIFEST" > "$OUTDIR/$NAME.pplugin"

GOFLAGS=()
LDFLAGS=""

if [ "$MODE" = "debug" ]; then
  GOFLAGS=(-tags=debug -gcflags=all='-N -l')
else
  LDFLAGS="-s -w"
fi

go build \
  -buildmode=c-shared \
  "${GOFLAGS[@]}" \
  -ldflags="$LDFLAGS" \
  -o "$OUTDIR/lib$NAME.so"

echo "Output:"
echo "$OUTDIR/lib$NAME.so"
echo "$OUTDIR/$NAME.pplugin"