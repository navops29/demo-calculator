# Calculator Demo
## Overview
* This is a very simple calculator app that performs basic math on integers.
* It can be run as follows:
```
calculator <num1> <op> <num2>
```
* It depends on https://github.com/navops29/demo-mathlib repo.
* The builds were run on a Ubuntu 20.04 instance.

## Sample Outputs
* Below output is obtained from the `calculator` binary from the `bin` directory of the caclulator package.
* NOTE: The calculator app assumes that the inputs are valid, and does not do any input validation.
```
(venv) snc@desk01:bin$ ./calculator 100 '*' 4
100 * 4 = 400
(venv) snc@desk01:bin$ ./calculator 100 '-' 15
100 - 15 = 85
(venv) snc@desk01:bin$ ./calculator 100 + 10
100 + 10 = 110
(venv) snc@desk01:bin$ ./calculator 100 / 20
100 / 20 = 5
```

## Resources
I have created two repos for this:
* https://github.com/navops29/demo-mathlib - contains core functions used by calculator
* https://github.com/navops29/demo-calculator - contains actual calc app that uses `mathlib` to perform math

## Building
* Build requires `conan` to be installed.
* Make sure that the dependent `mathlib` library is built.This [README](https://github.com/navops29/demo-mathlib/blob/master/README.md) file in the `mathlib` repo shows how that library can be built.
* Once all deps have been built, download/clone the `conanfile.py` from this repo.
* Run ` conan create .` command where `.` is the directory where `conanfile.py` is present.
* The build output shows that `conan` uses the locally cached `mathlib/0.0.1` build.
```
    mathlib/0.0.1 from local cache - Cache
```
* Full output of building `calculator` app:
```
(venv) snc@desk01:~/demo/calculator$ conan create .
[HOOK - attribute_checker.py] pre_export(): WARN: Conanfile doesn't have 'license'. It is recommended to add it as attribute
Exporting package recipe
calculator/0.0.1: A new conanfile.py version was exported
calculator/0.0.1: Folder: /home/snc/.conan/data/calculator/0.0.1/_/_/export
calculator/0.0.1: Exported revision: 5d5f6346a27bcb4abbc0492b776bc4c8
Configuration:
[settings]
arch=x86_64
arch_build=x86_64
build_type=Release
compiler=gcc
compiler.libcxx=libstdc++11
compiler.version=9
os=Linux
os_build=Linux
[options]
[build_requires]
[env]

calculator/0.0.1: Forced build from source
Installing package: calculator/0.0.1
Requirements
    calculator/0.0.1 from local cache - Cache
    mathlib/0.0.1 from local cache - Cache
Packages
    calculator/0.0.1:d693506373990b4389e8bf2e95bd3fe885c279c3 - Build
    mathlib/0.0.1:abd3ca9581f5ec3d6672fa2ee8818b1f09dbb082 - Cache

Installing (downloading, building) binaries...
mathlib/0.0.1: Already installed!
calculator/0.0.1: Configuring sources in /home/snc/.conan/data/calculator/0.0.1/_/_/source
Cloning into 'calculator'...
remote: Enumerating objects: 20, done.
remote: Counting objects: 100% (20/20), done.
remote: Compressing objects: 100% (13/13), done.
remote: Total 20 (delta 5), reused 20 (delta 5), pack-reused 0
Unpacking objects: 100% (20/20), 2.81 KiB | 319.00 KiB/s, done.
calculator/0.0.1: Copying sources to build folder
calculator/0.0.1: Building your package in /home/snc/.conan/data/calculator/0.0.1/_/_/build/d693506373990b4389e8bf2e95bd3fe885c279c3
calculator/0.0.1: Generator cmake created conanbuildinfo.cmake
calculator/0.0.1: Calling build()
-- The C compiler identification is GNU 9.3.0
-- The CXX compiler identification is GNU 9.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Conan: called by CMake conan helper
-- Conan: called inside local cache
-- Conan: Adjusting output directories
-- Conan: Using cmake global configuration
-- Conan: Adjusting default RPATHs Conan policies
-- Conan: Adjusting language standard
-- Conan: Compiler GCC>=5, checking major version 9
-- Conan: Checking correct version: 9
-- Conan: C++ stdlib: libstdc++11
-- Configuring done
-- Generating done
CMake Warning:
  Manually-specified variables were not used by the project:

    CMAKE_EXPORT_NO_PACKAGE_REGISTRY
    CMAKE_INSTALL_BINDIR
    CMAKE_INSTALL_DATAROOTDIR
    CMAKE_INSTALL_INCLUDEDIR
    CMAKE_INSTALL_LIBDIR
    CMAKE_INSTALL_LIBEXECDIR
    CMAKE_INSTALL_OLDINCLUDEDIR
    CMAKE_INSTALL_SBINDIR


-- Build files have been written to: /home/snc/.conan/data/calculator/0.0.1/_/_/build/d693506373990b4389e8bf2e95bd3fe885c279c3
Scanning dependencies of target calculator
[ 50%] Building CXX object CMakeFiles/calculator.dir/src/calc.cpp.o
[100%] Linking CXX executable bin/calculator
[100%] Built target calculator
[100%] Built target calculator
Install the project...
-- Install configuration: "Release"
-- Installing: /home/snc/.conan/data/calculator/0.0.1/_/_/package/d693506373990b4389e8bf2e95bd3fe885c279c3/bin/calculator
-- Set runtime path of "/home/snc/.conan/data/calculator/0.0.1/_/_/package/d693506373990b4389e8bf2e95bd3fe885c279c3/bin/calculator" to ""
calculator/0.0.1: Package 'd693506373990b4389e8bf2e95bd3fe885c279c3' built
calculator/0.0.1: Build folder /home/snc/.conan/data/calculator/0.0.1/_/_/build/d693506373990b4389e8bf2e95bd3fe885c279c3
calculator/0.0.1: Generated conaninfo.txt
calculator/0.0.1: Generated conanbuildinfo.txt
calculator/0.0.1: Generating the package
calculator/0.0.1: Package folder /home/snc/.conan/data/calculator/0.0.1/_/_/package/d693506373990b4389e8bf2e95bd3fe885c279c3
calculator/0.0.1: Calling package()
calculator/0.0.1: WARN: This conanfile has no package step
calculator/0.0.1 package(): Packaged 1 file: calculator
calculator/0.0.1: Package 'd693506373990b4389e8bf2e95bd3fe885c279c3' created
calculator/0.0.1: Created package revision b1dfdeedc9c7817a79fa8ce4e78ce311
```

## References
* https://docs.conan.io/en/latest/introduction.html
