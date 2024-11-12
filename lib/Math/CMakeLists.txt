add_library(Math Math.cpp)
add_library(Time22 Time22.cpp)
add_library(Duration Duration.cpp)

target_include_directories(Math PUBLIC include)
target_include_directories(Time22 PUBLIC include)
target_include_directories(Duration PUBLIC include)