# Building Multiple Executables with CMake

Suppose you have two files, each with its own `main()`:

- `main.cpp`
- `sort.cpp`

You want to build two separate executables: `main-app` and `sort-example`.

## Example `CMakeLists.txt`

```cmake
add_executable(main-app main.cpp)
add_executable(sort-example sort.cpp)
```

This will produce two binaries (e.g., in `build/bin/`):

- `main-app`
- `sort-example`

## Build Steps

```sh
mkdir -p build && cd build
cmake ..
cmake --build .
```

## Run

```sh
./bin/main-app
./bin/sort-example
```

---

**Note:** If both files have a `main()` and you try to build them into a single executable, you’ll get a linker error. Use separate targets as above.
