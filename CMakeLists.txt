cmake_minimum_required(VERSION 3.23.1)

project(openGLEngine)

add_subdirectory(source)
include_directories(source)
include_directories(glad)
add_subdirectory(external/glfw)

add_executable(${PROJECT_NAME} 
    main.cpp
    glad/glad.c 
    source/firstWindow.cpp
    source/input.cpp
)

#           CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/glfw/include
    PUBLIC source
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/glfw/src
    PUBLIC source
)

target_link_libraries(${PROJECT_NAME} glfw)

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})