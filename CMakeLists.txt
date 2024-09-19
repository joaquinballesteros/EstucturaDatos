# Versión mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Ejercicio C)


# Variable para el nombre del archivo (sin la extensión .c)
set(SOURCE_FILE 6ListaEnlazada)

# Directorio de archivos fuente
set(SRC_DIR src/MemoriaDinamica)

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



