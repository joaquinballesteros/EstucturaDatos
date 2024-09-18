
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hola";
    char str2[50] = ", mundo!";
    char str3[50];
    int length;
    int comparison;

    // Usando strcpy para copiar str1 a str3
    strcpy(str3, str1);
    printf("str3 después de strcpy: %s\n", str3);

    // Usando strlen para obtener la longitud de str1
    length = strlen(str1);
    printf("Longitud de str1: %d\n", length);

    // Usando strcat para concatenar str1 y str2
    strcat(str1, str2);
    printf("str1 después de strcat: %s\n", str1);

    // Usando strcmp para comparar str1 y str3
    
    if ((comparison = strcmp(str1, str3)) == 0) {
        printf("str1 y str3 son iguales.\n");
    } else if (comparison < 0) {
        printf("str1 es menor que str3.\n");
    } else {
        printf("str1 es mayor que str3.\n");
    }

    return 0;
}
