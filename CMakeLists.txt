cmake_minimum_required(VERSION 3.0)
project(Calculator)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
 
add_executable(calculator src/calc.cpp)

target_link_libraries(calculator ${CONAN_LIBS})
 