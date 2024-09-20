#ifndef PUNTO_H // Evita la inclusión múltiple del archivo de encabezado
#define PUNTO_H

struct Punto
{
    int x;
    int y;
}; // Declaración de una estructura

struct Punto suma(struct Punto a, struct Punto b); // Declaración de una función

#endif
