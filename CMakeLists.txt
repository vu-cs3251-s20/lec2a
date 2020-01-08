cmake_minimum_required(VERSION 3.12)
project(Lec2a)

# Set compiler flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -pedantic-errors -g")

set(SOURCE_FILES Stack1.c)
add_executable(Stack1 ${SOURCE_FILES})

set(SOURCE_FILES StackADTC.c StackADTMain.c)
add_executable(StackADTC ${SOURCE_FILES})

set(SOURCE_FILES StackwoExcep.cpp StackwoExcepMain.cpp)
add_executable(StackwoExcep ${SOURCE_FILES})
