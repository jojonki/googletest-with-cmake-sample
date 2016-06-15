# googletest-with-cmake-sample

## Project
```
.
|-- CMakeLists.txt
|-- LICENSE
|-- README.md
|-- src
|   |-- CMakeLists.txt
|   |-- main.cc
|   |-- my_math.cc
|   `-- my_math.h
`-- test
    |-- CMakeLists.txt
    `-- test.cc
```

## Setup
```
$ sudo apt-get install cmake
$ sudo apt-get install g++
$ git clone https://github.com/google/googletest
$ cd googletest/googletest
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Test
```
$ git clone https://github.com/jojonki/googletest-with-cmake-sample/
$ cd googletest-with-cmake-sample/
$ mkdir build
$ cd build
$ cmake ..
$ make
$ make test # or ctest --verbose
```
