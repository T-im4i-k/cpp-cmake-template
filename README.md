# C++ CMake Template

A minimal and modern **C++ project template** using **CMake**.  
This repository is meant to be used as a starting point for new C++ projects.

# Dependencies

### Necessary

- CMake >3.28
- Ninja >1.11
- clang++ >18.1

### Recommended

- clang-tidy >18.1
- clang-format >18.1

# Build & Run

### *Important*

*Before building the project, create your own CMakeUserPresets.json from CMakeUserPresets.template.json.*

### Debug Build + Testing

Build the project in Debug mode (includes extra logging and assertions) and run tests:

```sh
# Build debug
cmake --preset=clang-debug-build
cmake --build --preset=clang-debug-build

# Run application
./build/clang-debug-build/src/cpp_cmake_template

# Run tests
ctest --preset=clang-test
```

### Release Build

```sh
# Build release
cmake --preset=clang-release-build
cmake --build --preset=clang-release-build

# Run application
./build/clang-release-build/src/cpp_cmake_template
```