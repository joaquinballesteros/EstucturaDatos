# set cmake minimum required version
cmake_minimum_required(VERSION 3.26 FATAL_ERROR)

project(data_structures_c)


# enable compilation warnings
add_compile_options(-std=c17 -Wall -Wextra -Wpedantic)


# add all those sources to executable
add_executable(punto src/principal.c  src/PuntoL/punto.c
)
