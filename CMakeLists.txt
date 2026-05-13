cmake_minimum_required(VERSION 4.0)
project(Hello_world)

set(CMAKE_CXX_STANDARD 20)

add_executable(run_hello "Hello World.cpp")
add_executable(run_recipe "recipe.cpp")
add_executable(run_ingredients "ingredients.cpp")
