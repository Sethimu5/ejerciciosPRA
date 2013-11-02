cmake_minimum_required (VERSION 2.6)

project (exercises1)

Find_Package ( SDL REQUIRED )



include_directories(${SDL_INCLUDE_DIR})

add_executable(MYexample MYexample.cpp)
add_executable(MYsdlexample MYsdlexample.cpp)

target_link_libraries(MYsdlexample ${SDL_LIBRARY})
