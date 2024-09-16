#include <stdio.h>

int main(void)
{
    int *ptrInt;
    char *ptrChar;
    float *ptrFloat;

    printf("Entero %u, Char %u, Float %u", sizeof(ptrInt), sizeof(ptrChar), sizeof(ptrFloat));

    return 0;
}
