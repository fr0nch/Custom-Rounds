#!/bin/bash
# build.sh - For Linux builds

set -ex

mkdir -p $PREFIX/bin

cp bin/libcustomrounds.so $PREFIX/bin/
cp customrounds.pplugin $PREFIX/

chmod 755 $PREFIX/bin/libcustomrounds.so
chmod 644 $PREFIX/customrounds.pplugin
