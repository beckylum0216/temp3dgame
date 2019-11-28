#add_library(temp3Dgame main.cpp sample.cpp sample.h)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake-modules/assimp")

set(CMAKE_VERBOSE_MAKEFILE ON)

set(EXECUTABLE_OUTPUT_PATH "bin")

# includes
set(GLUT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../include)
set(ASSIMP_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../include)

#set libraries
set(FREEGLUT_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../lib/release/freeglut.lib)
set(FREEGLUT_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../lib/debug/freeglutd.lib)
#set(FREEGLUT_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../lib/release/libfreeglut.dll)
#set(FREEGLUT_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../lib/debug/libfreeglut.dll)
#set(OpenGL_gl_LIBRARY  ${FREEGLUT_RELEASE})
set(GLUT_LIBRARIES ${FREEGLUT_RELEASE} ${FREEGLUT_DEBUG})

set(ASSIMP_LIBRARY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../lib/assimp-msvc-debug/assimp-vc141-mtd.lib)
set(ASSIMP_LIBRARY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../lib/assimp-msvc-release/assimp-vc141-mt.lib)
#set(ASSIMP_LIBRARY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../lib/assimp-mingw/libassimp.dll)
#set(ASSIMP_LIBRARY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../lib/assimp-mingw/libassimp.dll)

set(assimp_LIBRARIES ${ASSIMP_LIBRARY_DEBUG} ${ASSIMP_LIBRARY_RELEASE})
#set(ASSIMP_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../lib/assimp-msvc-release)
#message(STATUS "ASSIMP_ROOT_DIR: ${ASSIMP_ROOT_DIR}")

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake-modules/assimp/Findassimp.cmake)

include_directories(${OpenGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIR} ${ASSIMP_INCLUDE_DIR})

find_package(OPENGL REQUIRED)
#find_package(GLUT REQUIRED)
message(STATUS "glut libraries: " ${GLUT_LIBRARIES})
find_package(ASSIMP REQUIRED)



add_executable(temp3dgame main.cpp sample.cpp sample.h FBXLoader.cpp FBXLoader.h Vector2.cpp Vector2.h Vector3.cpp Vector3.h Quaternion.cpp Quaternion.h Object.cpp Object.h)
#add_executable(temp3dgame main.cpp sample.cpp sample.h FBXLoader.cpp FBXLoader.h)


target_link_libraries(temp3dgame ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} ${assimp_LIBRARIES})
#target_link_libraries(temp3dgame ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})

