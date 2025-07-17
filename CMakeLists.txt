cmake_minimum_required(VERSION 3.10)
project(UpdateChecker)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories (for headers)
include_directories(include)

# Add executable and source files
add_executable(updateChecker
    src/main.cpp
    src/Check.cpp
)
