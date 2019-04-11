cmake_minimum_required(VERSION 3.8)
project(GunMq)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/data_origin/message_std.hh src/MessageQueus.cc src/MessageQueus.hh)
add_executable(GunMq ${SOURCE_FILES})