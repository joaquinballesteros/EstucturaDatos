#include <stdio.h>

int main() {
    int var = 20;   // declaración de una variable.
    int *ptr;       // declaración de un puntero.

    ptr = &var;     // almacenando la dirección de var en el puntero ptr.

    printf("Valor de la variable var: %d\n", var);
    printf("Dirección de memoria de var: %p\n", &var);
    printf("Valor del puntero ptr: %p\n", ptr);
    printf("Valor al que apunta el puntero ptr: %d\n", *ptr);

    return 0;
}
