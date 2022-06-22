cmake_minimum_required(VERSION 3.23.1)

project(openGLEngine)

add_subdirectory(source)
include_directories(source)
add_subdirectory(source/shaders)
include_directories(source/shaders)
include_directories(glad)
add_subdirectory(external/glfw)
add_subdirectory(external/stb_image)

add_executable(${PROJECT_NAME} 
    main.cpp
    glad/glad.c 
    source/firstWindow.cpp
    source/input.cpp
    source/triangle.cpp
    source/shaders/shader.cpp
    external/stb_image/stb_image.cpp
)

#           CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME} glfw)

find_package(OpenGL REQUIRED)

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})