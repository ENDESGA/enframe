cmake_minimum_required(VERSION 3.20)

set(CMAKE_SUPPRESS_REGENERATION TRUE)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native")
set(PROJECT_NAME "hept" CACHE STRING "PROJECT_NAME")
set(SOURCES "src/cc.h" "src/hept.h" "src/main.c" CACHE FILEPATH "SOURCES")
set(INCLUDE "inc/" CACHE PATH "INCLUDE")

project(${PROJECT_NAME} C)

IF (WIN32)
    include_directories(${INCLUDE})
    link_directories(${INCLUDE})
    add_executable(${PROJECT_NAME} ${SOURCES})
    target_link_libraries(${PROJECT_NAME} SDL2 SDL2main opengl32 glew32)
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".exe")
ELSEIF (UNIX)
    add_executable(${PROJECT_NAME} ${SOURCES})
    target_link_libraries(${PROJECT_NAME} m SDL2 SDL2main GL GLEW)
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".bin")
ENDIF ()