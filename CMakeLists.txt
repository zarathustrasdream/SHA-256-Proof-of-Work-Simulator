# Define minimum required version and project name
cmake_minimum_required(VERSION 3.10)
project(pow_sim)

# Set C++ standard and require it
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Optionally set C++ standard extensions OFF to enforce strict standard compliance
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable target from source files
add_executable(sha256_simulator src/sha256.cpp)

# Optionally specify include directories if you have headers in an include/ folder
# target_include_directories(sha256_simulator PRIVATE include)

# Enable warnings and common compiler flags (example for GCC/Clang)
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(sha256_simulator PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Optionally enable testing (if you add tests later)
# enable_testing()
