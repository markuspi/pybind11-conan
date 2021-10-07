cmake_minimum_required(VERSION 3.14)
project(Conantest)

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(pybind11 REQUIRED)
pybind11_add_module(demo src/demo.cpp)
