add_executable(my_exe
    main.cpp
)

target_link_libraries(my_exe
PUBLIC
    go
)

add_subdirectory(GameObject)