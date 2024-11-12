cmake_minimum_required(VERSION 3.16)
project(SimpleMath LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(my_main main.cpp)
target_link_libraries(my_main PUBLIC SimpleMath)
target_link_libraries(my_main PUBLIC Math)
target_link_libraries(my_main PUBLIC Time22)
target_link_libraries(my_main PUBLIC Duration)


add_subdirectory(lib)
add_subdirectory(test)




