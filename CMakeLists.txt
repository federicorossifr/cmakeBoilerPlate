cmake_minimum_required(VERSION 3.1...3.22)
enable_testing()
project(
    libname
    VERSION 0.1
    LANGUAGES CXX
)
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "-pedantic -Wall -Wextra -Werror -Wno-unused")


# Build library to be linked afterwards
add_subdirectory(src)

# Build examples from example folders
add_subdirectory(examples)

# Add tests from tests folder
add_subdirectory(tests)
