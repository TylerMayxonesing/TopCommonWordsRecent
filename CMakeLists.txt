cmake_minimum_required(VERSION 3.13)
project(TCW)

set(CMAKE_CXX_STANDARD 14)

add_executable(TCW main.cpp TPC.cpp TPC.h
        MoreStringFunctions.cpp MoreStringFunctions.h
        CharFunctions.cpp CharFunctions.h
        )