cmake_minimum_required(VERSION 3.20)
project(XREW_TESTING)
set(CMAKE_CXX_STANDARD 23)
add_subdirectory(${CMAKE_SOURCE_DIR}/../OpenXR-SDK-Source ${CMAKE_CURRENT_BINARY_DIR}/OpenXR)

add_executable(xrew_basic_test test.cpp)
target_link_libraries(xrew_basic_test openxr_loader)
target_include_directories(xrew_basic_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../generated)