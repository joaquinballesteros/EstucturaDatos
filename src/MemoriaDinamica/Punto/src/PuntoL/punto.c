#include "punto.h" // Incluye el archivo de encabezado local

struct Punto suma(struct Punto a, struct Punto b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}
