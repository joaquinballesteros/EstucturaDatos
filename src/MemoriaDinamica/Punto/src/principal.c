#include "punto.h"
#include <stdio.h>
int main(void)
{
    struct Punto a = {1, 2};
    struct Punto b = {3, 4};
    struct Punto c = suma(a, b);
    printf("La suma de los puntos (%d, %d) y (%d, %d) es (%d, %d)\n", a.x, a.y, b.x, b.y, c.x, c.y);
    return 0;
}
