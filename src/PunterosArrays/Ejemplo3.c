//Ejecuta sin corregir, luego corrige el error :)
#include <stdio.h>
void copiarCadena(char *destino, char *origen){
  int i = 0;
  while (origen[i]!='\0'){
    destino[i] = origen[i];
    i++;
  }
  destino[i]='\0';
}

int main(void)
{
    char origen[12] = "Hola mundo";
    char destino[11];
    copiarCadena(destino, origen);
    printf("Cadena copiada: \"%s\"\n", destino);
    /* code */
    return 0;
}
