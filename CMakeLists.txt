cmake_minimum_required(VERSION 3.20)
project(HashTable C)

set(CMAKE_C_STANDARD 90)

add_executable(HashTable main.c map.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
