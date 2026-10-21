FROM registry.gitlab.steamos.cloud/steamrt/sniper/sdk:latest

ARG GO_VERSION=1.27.0

ENV GOPATH=/gopath
ENV GOMODCACHE=/gopath/pkg/mod
ENV GOCACHE=/gocache
ENV PATH=$PATH:/usr/local/go/bin:$GOPATH/bin
ENV GOTOOLCHAIN=local

WORKDIR /app

RUN apt-get update && apt-get install -y --no-install-recommends \
    ca-certificates curl git pkg-config build-essential jq \
    gcc-14-monolithic \
    && rm -rf /var/lib/apt/lists/*

RUN ln -sf /usr/bin/gcc-14 /usr/bin/gcc || true \
 && ln -sf /usr/bin/g++-14 /usr/bin/g++ || true

RUN curl -fsSL https://go.dev/dl/go${GO_VERSION}.linux-amd64.tar.gz \
    | tar -C /usr/local -xz

ENTRYPOINT ["./build.sh"]
