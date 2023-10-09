# include <stdio.h>
# include <stdbool.h>

bool pedir_booleano(char* name){
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

void imprimir_booleano(bool x, char* name){
  char* valor;

  if (x){
    valor = "verdadero";
  } else{
    valor = "falso";
  }

  printf("El valor de %s es %s\n", name, valor);
}

int main(void){
  bool x;

  x = pedir_booleano("x");

  imprimir_booleano(x, "x");

  return 0;
}