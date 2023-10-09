# include <stdio.h>

int main(void){
  int x, y;

  printf("Ingrese un valor para x\n");
  scanf("%d", &x);

  printf("Ingrese un valor para y\n");
  scanf("%d", &y);
  
  y = y + y;

  x = x + y;

  printf("El estado obtenido es (x → %d, y → %d)\n", x, y);

  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.c Ej 1      (x → 4, y → 2)    (x → 8, y → 4)
  1.c Ej 2      (x → 52, y → 3)   (x → 58, y → 6) 
  1.c Ej 3      (x → 25, y → 3)   (x → 31, y → 6) 
*/