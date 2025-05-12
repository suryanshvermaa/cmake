## Default Compilers
- Windows
    - Visual Studio generator  MSVC
    - Ninja Generator MSVC
    - MinGW Makefiles Generators g++
- Linux
    - Visual Studio generator (Not available on linux)
    - Ninja Generator g++
    - MinGW Makefiles Generators g++

## Change Comiler
- Linux
    - Ninja Generator g++ -> Clang
    - MinGW Makefiles Generators g++ -> Clang

```
cmake -G Ninja -D CMAKE_CXX_COMPILER=g++ ..
```
