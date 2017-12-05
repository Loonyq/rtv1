cmake_minimum_required(VERSION 3.8)
project(rtv1)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")
set(SDL2_LIBRARY /Users/ilukaino/Library/Frameworks/SDL2.framework)

include_directories(${SDL2_LIBRARY})

set(SOURCE_FILES src/main.c include/rtv1.h src/sdl.c include/vec.h src/rednder.c src/vec.c include/ray.h src/ray.c include/sphere.h include/cam.h src/sphere.c include/color.h src/color.c)
add_executable(rtv1 ${SOURCE_FILES})

find_library(SDL2_LIBRARY SDL2)

target_link_libraries(rtv1 ${SDL2_LIBRARY})
#find_library(OPENGL_LIB OpenGL)
#find_library(APPKIT_LIB AppKit)

#target_link_libraries(rtv1 mlx ${OPENGL_LIB} ${APPKIT_LIB})