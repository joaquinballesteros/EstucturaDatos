#include <stdio.h>

#define NUM_PUNTOS 5

// Definir el tipo de dato Punto
typedef struct {
    float x;
    float y;
} Punto;

int main() {
    Punto puntos[NUM_PUNTOS] = {{1.0, 2.0}, {2.0, 3.0}, {3.0, 4.0}, {4.0, 5.0}, {5.0, 6.0}};
    Punto centroide = {0.0, 0.0};
    int i;

    // Calcular el centroide
    for(i = 0; i < NUM_PUNTOS; i++) {
        centroide.x += puntos[i].x;
        centroide.y += puntos[i].y;
    }
    centroide.x /= NUM_PUNTOS;
    centroide.y /= NUM_PUNTOS;

    // Imprimir el centroide
    printf("El centroide es: (%f, %f)\n", centroide.x, centroide.y);

    return 0;
}


