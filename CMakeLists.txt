cmake_minimum_required(VERSION 3.7)
project(competition)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        code-forces/811/problem811B.cpp
        code-forces/811/sortingProblem811B.cpp
        code-forces/813/problem813A.cpp
        code-forces/boostTest.cpp)

add_executable(competition ${SOURCE_FILES})