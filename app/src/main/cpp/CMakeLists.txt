cmake_minimum_required(VERSION 3.22.1)
project(ultraman_recomp CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-O0)

add_library(ultraman_native SHARED
    main_jni.cpp
    ultraman_recompiled.cpp
)

find_library(log-lib log)
find_library(android-lib android)

target_link_libraries(ultraman_native
    ${log-lib}
    ${android-lib}
)
