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
### Linux

    (cd dlls && make)

### FreeBSD

    (cd dlls && gmake CXX=clang++ CC=clang)
