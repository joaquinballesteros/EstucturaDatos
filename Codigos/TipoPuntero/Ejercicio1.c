#include <stdio.h>

int main(void)
{
    int *ptrInt;
    int a = 5;

    ptrInt=&a;

    printf("(usando puntero ) Entero %d, Direccion de memoria %p\n", *ptrInt,ptrInt);
    printf("(usando variable) Entero %d, Direccion de memoria %p\n", a,&a);


    return 0;
}
