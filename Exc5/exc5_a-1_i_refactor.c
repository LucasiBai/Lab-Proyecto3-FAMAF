# include <stdio.h>

int pedir_entero(char* name){
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

void imprimir_entero(int x, char* name){
  printf("El valor de %s es %d\n", name, x);
}


int main(void){
  int i;

  i = pedir_entero("i");

  while(i != 0){
    i = 0;
  }

  imprimir_entero(i, "i");
  return 0;
}

/*
  Programa      Estado Inicial    Estado obtenido
  1.i Ej 1      (i → 6)           (i → 0)
  1.i Ej 2      (i → 22)          (i → 0)
  1.i Ej 3      (i → 15)          (i → 0)
*/