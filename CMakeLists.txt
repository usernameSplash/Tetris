cmake_minimum_required(VERSION 3.0.0)
project(Tetris VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Tetris main.cpp)
ADD_LIBRARY ( A STATIC src/A.cpp )
TARGET_LINK_LIBRARIES ( Tetris PUBLIC A )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
