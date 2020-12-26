
add_library(Blocks STATIC
    Block.cpp
    Block1.cpp
    Block2.cpp
    Block3.cpp
    Block4.cpp
    Block5.cpp
)


target_include_directories( Blocks
PUBLIC
    ${CMAKE_SOURCE_DIR}/include
PRIVATE
    include
)