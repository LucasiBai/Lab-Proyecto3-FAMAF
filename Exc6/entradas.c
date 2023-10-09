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
  int n;

  n = pedir_entero("n");

  imprimir_entero(n, "n");

  return 0;
}