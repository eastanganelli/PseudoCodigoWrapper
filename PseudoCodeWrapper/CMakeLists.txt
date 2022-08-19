cmake_minimum_required(VERSION 3.8)

add_library(PseudoCodeWrapper PseudoCodeWrapper.hpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PseudoCodeWrapper PROPERTY LINKER_LANGUAGE C++ CXX_STANDARD 20 VERSION ${PROJECT_VERSION})
endif()