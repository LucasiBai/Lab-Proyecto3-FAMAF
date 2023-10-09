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
  
  if(x>=y){
    x = 0;
  } else if(x<=y){
    x = 2;
  }

  printf("El estado obtenido es (x → %d, y → %d)\n", x, y);

  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.e Ej 1      (x → 4, y → 2)    (x → 0, y → 2)
  1.e Ej 2      (x → 4, y → 4)    (x → 0, y → 4) 
  1.e Ej 3      (x → 4, y → 10)   (x → 2, y → 10) 
*/