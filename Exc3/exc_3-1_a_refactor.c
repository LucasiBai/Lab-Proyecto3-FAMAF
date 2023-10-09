# include <stdio.h>

int pedir_entero(char* name){
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

int main(void){
  int x;

  x = pedir_entero("x");

  x = 5;

  printf("El estado obtenido es (x → %d)\n", x);

  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.a Ej 1      (x → 3)           (x → 5)
  1.a Ej 2      (x → 10)          (x → 5)
  1.a Ej 3      (x → 20)          (x → 5)
*/