########################################################################
cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 14)  

project(Test)

set(SOURCE_DIR ./530.minimum_absolute_difference_in_BST)
Set(PROJ_NAME  test)

file(GLOB_RECURSE SOURCE "${SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE HEAD "${SOURCE_DIR}/*.h")

include_directories("./googleTest/include/")
include_directories("./googleTest/include/gtest/")
include_directories("${SOURCE_DIR}")

link_directories("./googleTest/lib/")

set(CMAKE_C_FLAGS " -g")
set(CMAKE_CXX_FLAGS " -g")


add_executable(${PROJ_NAME} ${SOURCE})
set_target_properties(${PROJ_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${PROJ_NAME} gtest gmock pthread)



