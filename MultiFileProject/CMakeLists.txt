cmake_minimum_required(VERSION 3.2)
project(MultiFileApp 
    VERSION 1.0.0
    DESCRIPTION "Multi File Project"
    LANGUAGES CXX)
add_executable(MultiFileApp main.cpp
                src/dog.cpp
                src/operations.cpp)

#alternative method to include files
# file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
# add_executable(MultiFileApp main.cpp ${SOURCE_FILES})

target_compile_features(MultiFileApp PRIVATE cxx_std_20)
target_include_directories(MultiFileApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)