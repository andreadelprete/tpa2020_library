cmake_minimum_required(VERSION 3.15)
project(library)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(library
        main.cpp
        src/book.cpp
        src/person.cpp
        src/author.cpp
        src/publisher.cpp
        src/warehouse.cpp include/library/warehouse.h)