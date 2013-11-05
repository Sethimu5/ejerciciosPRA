cmake_minimum_required (VERSION 2.6)

project (exercises1)

Find_Package ( SDL REQUIRED )

#ADD_DEFINITIONS(-std=c++11)


include_directories(${SDL_INCLUDE_DIR})

add_executable(MYexample MYexample.cpp)
add_executable(MYsdlexample MYsdlexample.cpp)
#add_executable(DoxyFile Doxyfile) lo dejo comentado, es solo una idea.

target_link_libraries(MYsdlexample ${SDL_LIBRARY})
