# project
project(torch_minux VERSION 0.1.0 LANGUAGES C CXX)

# version
cmake_minimum_required(VERSION 3.1)

set(MY_PYBIND ${MY_CURR}/third_party/pybind11-2.5.0)

add_subdirectory(${MY_PYBIND})
pybind11_add_module(example_pb example_pb.cpp)
