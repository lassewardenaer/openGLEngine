cmake_minimum_required(VERSION 3.23.1)

project(openGLEngine)

add_subdirectory(source)
add_subdirectory(external/glew)
add_subdirectory(external/glfw)

add_executable(${PROJECT_NAME} source/main.cpp)