## Generator
- A way to tell CMake which build system it's going to generate a project for
- Windows:
    - Visual Sudio Code
    - Mingw project
    - Ninga project
- Linux: 
    - Unix makefiles project
    - Ninja
### For windows
```
cmake -G "MingW Makefiles" ..
ming32-make
```
### Ninja Build
```
cmake -G "Ninja" ..
ninja
```