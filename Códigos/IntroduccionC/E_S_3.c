#include <stdio.h>

int main() {
    char letra;
    char cadena[100];
    
    printf("Introduce un carácter: ");
    scanf("%c", &letra);
    
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
    
    printf("La letra es: %c\n", letra);
    printf("La cadena es: %s\n", cadena);
    
    return 0;
}

