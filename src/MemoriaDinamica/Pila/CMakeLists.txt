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
include_directories(${CMAKE_SOURCE_DIR}/src/Stack_LL)
include_directories(${CMAKE_SOURCE_DIR}/src/Stack_A)

# add all those sources to executable
add_executable(${PROJECT_NAME}_LL ${SOURCE_DIR}/principal_ll.c  ${SOURCE_DIR}/Stack_LL/stack_ll.c)

add_executable(${PROJECT_NAME}_A ${SOURCE_DIR}/principal_a.c  ${SOURCE_DIR}/Stack_A/stack_a.c)


add_executable(${PROJECT_NAME}_TA ${SOURCE_DIR}/test_a.c  ${SOURCE_DIR}/Stack_A/stack_a.c)


add_executable(${PROJECT_NAME}_TLL ${SOURCE_DIR}/test_ll.c  ${SOURCE_DIR}/Stack_LL/stack_ll.c)