cmake_minimum_required(VERSION 3.23.1)

project(openGLEngine)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(source)
add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME}
    glfw3
)

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})