cmake_minimum_required(VERSION 3.24)
project(Programming_Problems)

set(CMAKE_CXX_STANDARD 14)

include_directories(Shorts/Sets_Maps/modset/src)
include_directories(Shorts/Sets_Maps/modset/test-unit)
include_directories(Shorts/Sorting/heap_of_sorts/src)
include_directories(Shorts/Sorting/heap_of_sorts/test-unit)
include_directories(Shorts/Sorting/sortable/src)
include_directories(Shorts/Sorting/sortable/test-unit)
include_directories(Shorts/Stacks/stack_flip/src)
include_directories(Shorts/Stacks/stack_flip/test-unit)
include_directories(Shorts/Stacks/stack_ops/src)
include_directories(Shorts/Stacks/stack_ops/test-unit)

add_executable(Programming_Problems
        Shorts/Sets_Maps/modset/src/cop3530_10_6.h
        Shorts/Sets_Maps/modset/test-unit/catch.hpp
        Shorts/Sets_Maps/modset/test-unit/test.cpp)
