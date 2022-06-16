cmake_minimum_required(VERSION 3.23.1)

project(openGLEngine)

add_subdirectory(source)
add_subdirectory(external/glfw)

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})

add_executable(${PROJECT_NAME} source/main.cpp)