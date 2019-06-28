cmake_minimum_required(VERSION 3.13)
project(pc4)

set(CMAKE_CXX_STANDARD 14)

add_executable(pc4 main.cpp Circle.cpp Circle.h Rectangle.cpp Rectangle.h Event.cpp Event.h Component.cpp Component.h Window.cpp Window.h)