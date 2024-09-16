<<<<<<< HEAD:Codigos/IntroduccionC/printf.c
#include <stdio.h>

int main()
{
    int entero = 42;
    float real = 3.14159;
    char caracter = 'X';
    char cadena[] = "Hola, mundo!";

    // Especificadores de formato:
    printf("Entero: %5d\n", entero); // Ancho mínimo de 5 caracteres
    printf("Real: %.2f\n", real);    // Dos decimales
    printf("Carácter: %c\n", caracter);
    printf("Cadena: %-20s\n", cadena); // Justificación a la izquierda, ancho mínimo de 20 caracteres

    return 0;
=======
#include <stdio.h>

int main(void)
{
    int entero = 42;
    float real = 3.14159;
    char caracter = 'X';
    char cadena[] = "Hola, mundo!";

    // Especificadores de formato:
    printf("Entero: %5d\n", entero); // Ancho mínimo de 5 caracteres
    printf("Real: %.2f\n", real);    // Dos decimales
    printf("Carácter: %c\n", caracter);
    printf("Cadena: %-20s\n", cadena); // Justificación a la izquierda, ancho mínimo de 20 caracteres

    return 0;
>>>>>>> 775b0336fa820ed76c2bf1afa3721d1dfa9cc519:Códigos/IntroduccionC/printf.c
}