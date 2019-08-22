cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(testlib)

add_library(testlib src/testlib.hpp src/other.cpp)
target_include_directories(testlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

if (APPLE)
  target_compile_definitions(testlib PUBLIC TESTLIB_APPLE)
  target_sources(testlib PRIVATE src/darwin.mm)
  target_link_libraries(testlib PUBLIC Cocoa)
endif()

add_executable(runme src/runme.cpp)
target_link_libraries(runme PRIVATE testlib)
