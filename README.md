# geeksforgeeks

Small C++ practice projects, each following a topic from GeeksforGeeks articles. Personal learning notes, not a maintained project.

## What's inside

Each folder is a standalone CMake project (`CMakeLists.txt`, `src/`, `include/`, `build.sh`, `run.sh`, `build_and_run.sh`):

| Folder | Content |
|---|---|
| `C++ STL Tutorial/` | Sorting examples (STL sort, bubble, counting sort, k-th largest, min pair difference, duplicate removal) |
| `Move Semantics in C++/` | Move semantics and element-insertion examples |
| `Queue in C++ STL/` | `std::queue` examples |
| `Strings in C++/` | String examples |
| `C++ ProjectStructureTempalte/` | Empty project skeleton (folder name has a typo, kept as is) |

## Run

Needs CMake >= 3.10 and a C++ compiler.

```bash
cd "C++ STL Tutorial"
./build.sh
./build/bin/Cpp-STL
```

I built and ran `C++ STL Tutorial` this way; the other folders use the same layout.

## Status

Learning repo, not maintained. Examples are short and several are skeletons.

## Credits

Topics are taken from GeeksforGeeks, whose name and content belong to their owners. The code here is my own implementation; no GeeksforGeeks material is redistributed. Code is MIT-licensed (see `LICENSE`).
