cmake_minimum_required(VERSION 3.1)
project(DriftGL CXX)

set(DriftGL-Headers
	include/DriftGL.h
	include/DriftGL_gen.h
)

set(DriftGL-Sources
	src/DriftGL.cpp
	src/DriftGL_gen.cpp
)

if (WIN32)
	list(APPEND DriftGL-Sources src/DriftGL_wgl.cpp)
endif (WIN32)

add_library(DriftGL STATIC ${DriftGL-Headers} ${DriftGL-Sources})
target_include_directories(DriftGL PUBLIC include)


add_executable(test_create_context test/create_context.cpp)
target_link_libraries(test_create_context PRIVATE DriftGL)