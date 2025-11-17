## Build and Run

- Prereqs: CMake 3.10+, a C++ compiler (g++/clang++)

- Quick build:

```
./build.sh
```

- Resulting binary:

```
build/bin/Cpp-STL
```

- Run it:

```
./build/bin/Cpp-STL
```

## Notes

- The project targets C++17 and places executables in `build/bin`.
- If you prefer a Debug build:

```
rm -rf build && mkdir -p build && cd build \
	&& cmake -DCMAKE_BUILD_TYPE=Debug .. \
	&& cmake --build . -j"$(nproc)"
```
