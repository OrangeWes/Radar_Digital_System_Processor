cmake_minimum_required(VERSION 3.10)
project(radar_dsp_pipeline)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)
