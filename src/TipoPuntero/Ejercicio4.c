void swap1(int x, int y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

void swap2(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int main(void)
{
   
    int a,b;
    int c,d;
    a=c=4;
    b=d=6;

    swap1(a,b);
    swap2(&c,&d);

    //Usa el debug
    //REcuerda cambiar el CMakeLists.txt para que compile este fichero en 
    //set(SOURCE_FILE Ejercicio4)
    return 0;
}
