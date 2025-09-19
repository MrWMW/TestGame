cmake_minimum_required(VERSION 3.30)
project(TestProject)

set(CMAKE_CXX_STANDARD 20)


include_directories(./EasyX/include)
link_directories(./EasyX/lib64)
link_libraries(libeasyx.a)
add_executable(TestProject main.cpp
        scene.h
        menu_scene.h
        game_scene.h
        scene_manager.h
        select_scene.h
)
