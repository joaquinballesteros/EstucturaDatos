# set cmake minimum required version
cmake_minimum_required(VERSION 3.26 FATAL_ERROR)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# define a c project with name provided as parameter (cmake CMakeLists.txt -DPRJCT_NAME=foo)
project(data_structures_c C)

# use c17 standard
set(CMAKE_C_STANDARD 17)
set(SOURCE_DIR src)

# enable compilation warnings
add_compile_options(-Wall -Wextra -Wpedantic)

# Añadir directorios de inclusión para los archivos de cabecera
include_directories(${CMAKE_SOURCE_DIR}/src/ColaL)

# add all those sources to executable
add_executable(${PROJECT_NAME} ${SOURCE_DIR}/principal.c  ${SOURCE_DIR}/ColaL/cola.c)