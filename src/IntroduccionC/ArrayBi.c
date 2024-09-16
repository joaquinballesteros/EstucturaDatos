<<<<<<< HEAD:Codigos/IntroduccionC/Array1.c
#include <stdio.h>

#define DIM 3  // Definir la dimensión como constante

int main() {
    int matriz1[DIM][DIM] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[DIM][DIM] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int matrizSuma[DIM][DIM];
    int i, j;

    // Sumar las matrices
    for(i = 0; i < DIM; i++) {
        for(j = 0; j < DIM; j++) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimir la matriz resultante
    printf("La matriz resultante es:\n");
    for(i = 0; i < DIM; i++) {
        for(j = 0; j < DIM; j++) {
            printf("%d ", matrizSuma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

#define DIM 3  // Definir la dimensión como constante

int main(void) {
    int matriz1[DIM][DIM] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[DIM][DIM] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int matrizSuma[DIM][DIM];
    int i, j;

    // Sumar las matrices
    for(i = 0; i < DIM; i++) {
        for(j = 0; j < DIM; j++) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimir la matriz resultante
    printf("La matriz resultante es:\n");
    for(i = 0; i < DIM; i++) {
        for(j = 0; j < DIM; j++) {
            printf("%d ", matrizSuma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 775b0336fa820ed76c2bf1afa3721d1dfa9cc519:Codigos/IntroduccionC/ArrayBi.c
