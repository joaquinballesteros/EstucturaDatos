#include <stdio.h>

int main(void) {
    int n, i;
    float numeros[100], suma = 0.0, media;

    printf("Introduce el número de elementos: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0) {
        printf("Error! El número debe estar en el rango de (1 a 100).\n");
        printf("Introduce el número de nuevo: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i) {
        printf("%d. Introduce un número: ", i+1);
        scanf("%f", &numeros[i]);
        suma += numeros[i];
    }

    media = suma / n;

    printf("Media = %.2f\n", media);

    return 0;
}
