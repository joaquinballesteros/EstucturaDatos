#define NUM_INT 10
int main(void)
{
    int arrayEnteros[NUM_INT];
    int * ptrEntero;

    ptrEntero = arrayEnteros;
    //ptrEntero = &arrayEnteros;
    //ptrEntero = &arrayEnteros[0];
    for (int i = 0; i < NUM_INT; i++)
    {
      *ptrEntero=i;
      ptrEntero++;
    }
    

    return 0;
}
