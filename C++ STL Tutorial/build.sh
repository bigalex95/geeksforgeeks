#!/usr/bin/env bash
set -euo pipefail

echo "#################################"
echo "Configuring and building (Release)"
echo "#################################"

rm -rf build
mkdir -p build
cd build

# Configure
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build
cmake --build . --config Release -j"$(nproc || echo 4)"

echo "\n✅ Build complete. Binary should be at:"
echo "$(pwd)/bin/Cpp-STL"