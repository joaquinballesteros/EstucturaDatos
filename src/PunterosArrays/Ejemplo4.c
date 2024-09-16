struct Punto {
  int x;
  int y;
}; //este punto y coma se suele olvidar y es necesario para completar la definición del tipo


void cambiarPuntos1(struct Punto p){
  int temp = p.x;
  p.x=p.y;
  p.y=temp;
}
void cambiarPuntos2(struct Punto * p){
  int temp = p->x;
  p->x=p->y;
  p->y=temp;

  /* otra forma de escribir esto 
  int temp = (*p).x;
  (*p).x=(*p).->y;
  (*p).->y=temp;*/
}

int main(void)
{
    struct Punto p1 = {2,3};
    struct Punto p2 = {2,3};
    cambiarPuntos1(p1);
    cambiarPuntos2(&p2);

    //Usa del depurardor, ¡nada de salidas por pantalla!

    /* code */
    return 0;
}
