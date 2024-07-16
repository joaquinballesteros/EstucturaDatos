#include <stdio.h>

// Función que suma dos números y modifica uno de ellos por referencia
void sumaPorReferencia(int *a, int b) {
    *a += b; // Modifica el valor de 'a' directamente
}

int main() {
    int num1 = 5;
    int num2 = 3;

    printf("Antes de la suma: num1 = %d\n", num1);
    sumaPorReferencia(&num1, num2); // Pasamos 'num1' por referencia
    printf("Después de la suma: num1 = %d\n", num1);

    return 0;
}
