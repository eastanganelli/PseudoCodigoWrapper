# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("PseudoCodeWrapper" VERSION 1.0.1 DESCRIPTION "PseudoCode Warpper")

# Include sub-projects.
add_subdirectory ("PseudoCodeWrapper")
add_subdirectory ("demo")
add_subdirectory ("test")
