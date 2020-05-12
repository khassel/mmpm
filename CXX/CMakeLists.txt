cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
project(MMPM)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
    mmpm
    ${PROJECT_SOURCE_DIR}/mmpm.cpp
    ${PROJECT_SOURCE_DIR}/main.cpp
)

include(FindPackageHandleStandardArgs)
find_package(libfort)
target_link_libraries(mmpm PRIVATE libfort::fort)

message(${PROJECT_SOURCE_DIR})



