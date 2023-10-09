# include <stdio.h>

int pedir_entero(char* name){
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

int main(void){
  int x, y;

  x = pedir_entero("x");
  y = pedir_entero("y");
  
  x = x + y;

  y = y + y;

  printf("El estado obtenido es (x → %d, y → %d)\n", x, y);

  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.b Ej 1      (x → 2, y → 3)    (x → 5, y → 6)
  1.b Ej 2      (x → 4, y → 3)    (x → 7, y → 6) 
  1.b Ej 3      (x → 75, y → 3)   (x → 78, y → 6) 
*/