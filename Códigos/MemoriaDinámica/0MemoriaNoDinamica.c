#include <stdio.h>
int global_var = 10; // Sección de datos inicializados
int x;               // Sección de datos no inicializados
void contador(void)
{
    static int static_counter = 0; // Sección de datos inicializados
    static_counter++;
    x = static_counter;
    printf("Llamado %d veces\n", static_counter);
}
int main(void)
{
    short i; // Sección de datos Stack
    for (i = 0; i < global_var; i++)
    {
        contador();
    }
    printf("Valor de x %d\n", x);
    // error: use of undeclared identifier 'static_counter'
    //  printf("Valor de static_counter %d", static_counter);
    return 0;
}
