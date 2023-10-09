# include <stdio.h>

int main(void){
  int i;

  printf("Ingrese un valor para i\n");
  scanf("%d", &i);

  while(i != 0){
    i = i - 1;
  }

  printf("El estado obtenido es (i → %d)\n", i);
  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.h Ej 1      (i → 4)           (i → 0)
  1.h Ej 2      (i → 10)          (i → 0)
  1.h Ej 3      (i → 20)          (i → 0)
*/