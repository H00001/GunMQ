cmake_minimum_required(VERSION 3.8)
project(GunMq)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/data_origin/message_std.hh src/MessageQueu.cc src/MessageQueu.hh src/MessageQueueManage.cc src/MessageQueueManage.hh src/hashble.cc src/hashble.hh)
add_executable(GunMq ${SOURCE_FILES})