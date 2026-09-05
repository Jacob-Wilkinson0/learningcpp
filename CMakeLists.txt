cmake_minimum_required(VERSION 4.3)

project(learningcpp)

set(CMAKE_CXX_STANDARD 23)


add_executable(hello_world 1_hello_world/main.cpp)
add_executable(detect_repeated_words 2_objects_types_values/detect_repeated_words.cpp)
add_executable(debugging_pt1 2_objects_types_values/debugging_pt1.cpp)
add_executable(conversions 2_objects_types_values/conversions.cpp)
add_executable(conversions_pt2 2_objects_types_values/conversions_pt2.cpp)
add_executable(drill 2_objects_types_values/drill.cpp)
add_executable(expressions 3_computation/constant_expressions.cpp)
