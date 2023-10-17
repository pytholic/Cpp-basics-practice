cmake_minimum_required(VERSION 3.17)
set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(MAIN)

# List all subdirectories
set(subdirs
    ./greatest-common-divisor
    ./farmer-animals
    ./books-permutations
    ./compensation
    ./file
    ./strings
    ./artillery
    ./pointers
    ./class-and-objects
)

# Loop to add subdirectories
foreach(subdir ${subdirs})
    add_subdirectory(${subdir})
endforeach()