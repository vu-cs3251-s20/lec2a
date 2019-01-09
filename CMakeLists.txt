cmake_minimum_required(VERSION 3.2)
project(Lec2a)

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -Wextra -pedantic -pedantic-errors")

set(SOURCE_FILES Stack1.c)
add_executable(Stack1 ${SOURCE_FILES})

set(SOURCE_FILES StackADTC.c StackADTMain.c)
add_executable(StackADTC ${SOURCE_FILES})

set(SOURCE_FILES StackwoExcep.cpp StackwoExcepMain.cpp)
add_executable(StackwoExcep ${SOURCE_FILES})
