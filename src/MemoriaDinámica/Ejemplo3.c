#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Prueba con 3 y con 1000 elementos
    int numElementos = 1000;

    // Petición de memoria con malloc (número de bytes)
    // No inicializa
    int *arrDin = (int *)malloc(numElementos * sizeof(int));
    if (arrDin == NULL)
    {
        perror("Error: No se pudo reservar memoria.\n");
        exit(1);
    }

    arrDin[1] = 1;
    arrDin[2] = 2;
    arrDin[numElementos - 1] = 3;
    free(arrDin);
    printf("Elementos [%d %d %d] en zona %p\n", arrDin[0], arrDin[1], arrDin[numElementos - 1], (void *)arrDin);

    arrDin = (int *)malloc(numElementos * sizeof(int));
    if (arrDin == NULL)
    {
        perror("Error: No se pudo reservar memoria.\n");
        exit(1);
    }

    arrDin[1] = 23;
    printf("Elementos [%d %d %d] en zona %p\n", arrDin[0], arrDin[1], arrDin[numElementos - 1], (void *)arrDin);
    free(arrDin);

    return 0;
}
