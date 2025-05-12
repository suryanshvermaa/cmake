cmake_minimum_required(VERSION 3.2)
project(MultiFileApp 
    VERSION 1.0.0
    DESCRIPTION "Multi File Project"
    LANGUAGES CXX)

add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)

add_executable(MultiFileApp main.cpp
                src/dog.cpp
                # src/operations.cpp
                src/log.cpp)

#alternative method to include files
# file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
# add_executable(MultiFileApp main.cpp ${SOURCE_FILES})

target_compile_features(MultiFileApp PRIVATE cxx_std_20)
target_include_directories(MultiFileApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(MultiFileApp PUBLIC operations)