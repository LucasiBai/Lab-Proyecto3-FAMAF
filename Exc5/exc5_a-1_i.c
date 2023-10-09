# include <stdio.h>

int main(void){
  int i;

  printf("Ingrese un valor para i\n");
  scanf("%d", &i);

  while(i != 0){
    i = 0;
  }

  printf("El estado obtenido es (i → %d)\n", i);
  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.i Ej 1      (i → 6)           (i → 0)
  1.i Ej 2      (i → 22)          (i → 0)
  1.i Ej 3      (i → 15)          (i → 0)
*/