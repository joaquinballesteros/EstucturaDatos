#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct SinPadding
{
    char c;
    int i;
    char c2;
};

struct ConPadding
{
    char c;
    char c2;
    int i;
};

int main(void)
{
    struct SinPadding structSin;
    struct ConPadding structCon;
    printf("Tamaño de struct SinPadding: %lu bytes\n", sizeof(structSin));
    printf("Tamaño de struct ConPadding: %lu bytes\n", sizeof(structCon));
    return 0;
}
