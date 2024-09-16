#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Petición de memoria con malloc (número de bytes)
    // No inicializa
    int *arrDin = (int *)malloc(6 * sizeof(int));
    char *p = (char *)malloc(sizeof(char));

    if (arrDin == NULL || p == NULL)
    {
        perror("Error: No se pudo reservar memoria.\n");
        exit(1);
    }
    printf("Elementos [%d %d %d] en zona %p, y char %c in zona %p\n", arrDin[0], arrDin[1], arrDin[3], (void *)arrDin, *p, (void *)p);

    *p = 'a';
    arrDin[1] = 1;
    arrDin[2] = 2;
    arrDin[3] = 3;
    arrDin[7] = 4;
    arrDin[8] = 69;

    printf("Elementos [%d %d %d] en zona %p, y char %c in zona %p\n", arrDin[0], arrDin[1], arrDin[3], (void *)arrDin, *p, (void *)p);

    // ¡Siempre se libera!
    free(arrDin);
    free(p);

    return 0;
}
