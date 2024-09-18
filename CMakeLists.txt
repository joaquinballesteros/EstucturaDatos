# Versión mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Ejercicio C)


# Variable para el nombre del archivo (sin la extensión .c)
<<<<<<< HEAD
set(SOURCE_FILE HelloWord)

# Directorio de archivos fuente
set(SRC_DIR src/IntroduccionC)
=======
set(SOURCE_FILE Ejemplo4)

# Directorio de archivos fuente
set(SRC_DIR src/PunterosArrays)
>>>>>>> 8cdc2bc39d612a2c937251db22201a03f9e370f7

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_BUILD_TYPE Debug)

# Añadir flags de compilación
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# Asegurarse de que el compilador no realice optimizaciones
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wextra")


# Archivo fuente a compilar usando la variable SOURCE_FILE
set(SOURCES ${SRC_DIR}/${SOURCE_FILE}.c)

# Crear el ejecutable usando la variable SOURCE_FILE
add_executable(${SOURCE_FILE} ${SOURCES})



