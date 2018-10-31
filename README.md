Multiplayer Half-Life SDK for Xash3D with some fixes.

## How to build

### CMake as most universal way

    mkdir build && cd build
    cmake ../
    make

Crosscompiling using mingw:

    mkdir build-mingw && cd build-mingw
    TOOLCHAIN_PREFIX=i686-w64-mingw32 # check up the actual mingw prefix of your mingw installation
    cmake ../ -DCMAKE_SYSTEM_NAME=Windows -DCMAKE_C_COMPILER="$TOOLCHAIN_PREFIX-gcc" -DCMAKE_CXX_COMPILER="$TOOLCHAIN_PREFIX-g++"

You may enable or disable some build options by -Dkey=value. All available build options are defined in CMakeLists.txt at root directory.
See below if you want to build the GoldSource compatible libraries.

See below, if CMake is not suitable for you:

### Windows

#### Using msvc

We use compilers provided with Microsoft Visual Studio 6. There're `compile.bat` scripts in both `cl_dll` and `dlls` directories.
Before running any of those files you must define `MSVCDir` variable which is the path to your msvc installation.

    set MSVCDir=C:\Program Files\Microsoft Visual Studio
    compile.bat

These scripts also can be ran via wine:

    MSVCDir="z:\home\$USER\.wine\drive_c\Program Files\Microsoft Visual Studio" wine cmd /c compile.bat

The libraries built this way are always GoldSource compatible.

There're dsp projects for Visual Studio 6 in `cl_dll` and `dlls` directories, but we don't keep them up-to-date. You're free to adapt them for yourself and try to import into the newer Visual Studio versions.
### Linux

    (cd dlls && make)

### FreeBSD

    (cd dlls && gmake CXX=clang++ CC=clang)
