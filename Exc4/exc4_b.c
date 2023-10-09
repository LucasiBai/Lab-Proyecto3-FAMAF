# include <stdio.h>

int main(void){
  int x, y, z, m;

  printf("Ingrese un valor para x\n");
  scanf("%d", &x);

  printf("Ingrese un valor para y\n");
  scanf("%d", &y);
  
  printf("Ingrese un valor para z\n");
  scanf("%d", &z);

  if(x<y){
    m = x;
  }else if (x>=y){
    m = y;
  }

  if(m>=z){
    m = z;
  } 

  printf("El estado obtenido es (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);

  return 0;
}

/*
  Programa      Estado Inicial                Estado obtenido
  Ej 1          (x → 5, y → 4, z → 8, m → 0)  (x → 5, y → 4, z → 8, m → 4)
  Ej 2          (x → 2, y → 4, z → 5, m → 3)  (x → 2, y → 4, z → 5, m → 2) 
  Ej 3          (x → 8, y → 2, z → 4, m → 5)  (x → 8, y → 2, z → 4, m → 2)

  El programa realiza operaciones sobre m según el valor que poseen
  las demás variables del estado inicial.
  El valor final que se obtiene, es el entero más chico ingresado
  al programa.

  En el caso de (x → 5, y → 4, z → 8, m → 0), el valor de m es 4.
*/