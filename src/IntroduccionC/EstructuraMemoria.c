#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//ulimit -s para comprar el tamaño de la pila en Linux y Mac
void reventarPila(void){
    int a, b, c, d;
    reventarPila();
}

void reventarMonticulo(void){
    int *a = NULL;
    while (true){
        a = malloc(sizeof(int) * 1000);
    }
}
int main(void) {
    printf ("Vamos a reventar la memoria de este programa :) \n");

    //reventarPila();
    //reventarMonticulo();
    return 0;
}
