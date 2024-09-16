#include <stdio.h>

int main(void)
{
    int *ptrInt;
    
    char *ptrChar;
    float *ptrFloat;

    int a = 5;
    char b = 'b';
    float f = 4.2f;

    ptrInt=&a;
    ptrChar=&b;
    ptrFloat=&f;

    printf("Entero %llu, Char %llu, Float %llu\n", sizeof(ptrInt), sizeof(ptrChar), sizeof(ptrFloat));
    printf("Entero %p, Char %p, Float %p\n", ptrInt, ptrChar, ptrFloat);


    return 0;
}
