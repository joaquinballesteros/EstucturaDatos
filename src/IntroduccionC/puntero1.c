<<<<<<< HEAD:Codigos/IntroduccionC/puntero1.c
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
=======
#include <stdio.h>

int main(void) {
    int var = 20;   // declaración de una variable.
    int *ptr;       // declaración de un puntero.

    ptr = &var;     // almacenando la dirección de var en el puntero ptr.

    printf("Valor de la variable var: %d\n", var);
    printf("Dirección de memoria de var: %p\n", &var);
    printf("Valor del puntero ptr: %p\n", ptr);
    printf("Valor al que apunta el puntero ptr: %d\n", *ptr);

    return 0;
}
>>>>>>> 775b0336fa820ed76c2bf1afa3721d1dfa9cc519:Codigos/SegundaSesionPuntero/puntero1.c
