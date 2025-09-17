#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Prueba con 3 y con 1000 elementos
    int numElementos = 1000;

    int *arrDin;

    arrDin[0] = 1;
    arrDin[numElementos - 1] = 3;

    printf("Elementos [%d ... %d] en zona %p\n", arrDin[0], arrDin[numElementos - 1], (void *)arrDin);

    numElementos *= 2;
    // Petición de memoria con realloc (puntero, nuevo número de bytes)
    // Reubica si es necesario
    arrDin = (int *)realloc(arrDin, numElementos * sizeof(int));
    arrDin[numElementos - 1] = 6;
    printf("Elementos [%d ... %d] en zona %p\n", arrDin[0], arrDin[numElementos - 1], (void *)arrDin);

    // ¡Siempre se libera!
    free(arrDin);

    return 0;
}
