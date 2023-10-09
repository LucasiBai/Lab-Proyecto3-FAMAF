# include <stdio.h>

int main(void){
  int x;

  printf("Ingrese un valor para x\n");
  scanf("%d", &x);

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