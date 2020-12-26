
add_library(go STATIC
    GameObject.cpp
)

target_include_directories( go
PUBLIC
    ${CMAKE_SOURCE_DIR}/include
PRIVATE
    include
)


add_subdirectory(Block)
add_subdirectory(GameBoard)