cmake_minimum_required(VERSION 3.2)

set(CXX_STANDARD_REQUIRED ON) # Make c++20 a hard requirement
set(CMAKE_CXX_STANDARD 20) # Default C++ standard for targets

project(MultiFileApp 
    VERSION 1.0.0
    DESCRIPTION "Multi File Project"
    LANGUAGES CXX)

add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# target_compile_features(operations PUBLIC cxx_std_20)

add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
# target_compile_features(logger PUBLIC cxx_std_20)

add_executable(MultiFileApp main.cpp
                src/dog.cpp)

#alternative method to include files
# file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
# add_executable(MultiFileApp main.cpp ${SOURCE_FILES})

# target_compile_features(MultiFileApp PRIVATE cxx_std_20)
target_include_directories(MultiFileApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(MultiFileApp PUBLIC operations)
target_link_libraries(MultiFileApp PUBLIC logger)
