cmake_minimum_required(VERSION 2.6)
get_filename_component(CURRENT_DIR ${CMAKE_CURRENT_LIST_FILE} PATH) # for cmake before 2.8.3

project(tcstream)

if(X86)
	set(CMAKE_CXX_FLAGS "-m32 -std=c++11 -g -Wall")
	set(CMAKE_EXE_LINKER_FLAGS "-m32")
else()
	set(CMAKE_CXX_FLAGS "-std=c++11 -g -Wall")
	set(CMAKE_EXE_LINKER_FLAGS "")
endif()

option(PORT "port")

include_directories(port/${PORT})

add_library(tcstream STATIC tcstream.cpp)

if(DEBUG)
	set_target_properties(tcstream PROPERTIES COMPILE_FLAGS "-g" LINK_FLAGS "-g")
endif()
