# GeeksforGeeks Tutorials (Personal Learning)

This repository contains personal learning projects inspired by topics from the GeeksforGeeks website. Each tutorial lives in its own folder and is built independently, typically with CMake.

> Note: GeeksforGeeks is a registered trademark of its respective owners. This repository contains my own implementations and notes; it does not redistribute GeeksforGeeks paid content. Links to original articles are provided where relevant.

## Repository Structure

- `C++ STL Tutorial/` — Minimal CMake project demonstrating a C++ "Hello World" as a base for STL examples. See its [README](C++%20STL%20Tutorial/README.md).

As more tutorials are added, each will follow a similar layout with its own `README.md` and build scripts.

## Prerequisites

- CMake >= 3.10
- A C++ compiler (GCC/Clang/MSVC). On Linux, GCC 9+ recommended.
- `zsh` or `bash` for provided scripts.

## Quick Start

Build and run any tutorial that has a `build.sh`:

```zsh
# Example: C++ STL Tutorial
cd "C++ STL Tutorial"
./build.sh
./build/bin/Cpp-STL
```

If a tutorial uses plain CMake (no script):

```zsh
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . -j"$(nproc || echo 4)"
```

## Contributing / Notes

- This is a personal learning space. PRs are welcome but may be curated to keep scope focused on study notes and examples.
- Keep examples small, focused, and runnable.
- Prefer standard tooling (CMake, `build.sh`) for consistency.

## License

- Code in this repository is released under the MIT License. See [LICENSE](LICENSE).
- GeeksforGeeks content and trademarks belong to their respective owners; this repo only links to and is inspired by their materials.
