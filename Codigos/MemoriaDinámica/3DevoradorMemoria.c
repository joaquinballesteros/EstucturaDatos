#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int *arrDin = NULL;
    while (true)
    {
        arrDin = (int *)malloc(sizeof(int) * 100);
        arrDin[0] = 1;
        // free(arrDin);
    }

    return 0;
}
