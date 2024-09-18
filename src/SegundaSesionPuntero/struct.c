#include <stdio.h>
struct Punto {
    int x;
    int y;
};

int main(void)
{
    struct Punto punto = {1, 2};
    printf("Dirección de memoria de punto: %p,%p\n", &punto.x, &punto.y);
     
    return 0;
}
