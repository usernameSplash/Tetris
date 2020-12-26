
add_library(gb STATIC
    GameBoard.cpp
)


target_include_directories( gb
PUBLIC
    ${CMAKE_SOURCE_DIR}/include
PRIVATE
    include
)