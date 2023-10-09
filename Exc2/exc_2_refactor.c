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
  int x, y, z, b, w;

  x = pedir_entero("x");
  y = pedir_entero("y");
  z = pedir_entero("z");
  b = pedir_entero("b");
  w = pedir_entero("w");

  imprimir_entero(x % 4 == 0, "x %% 4 == 0");
  imprimir_entero(x + y == 0 && y - x == (-1) * z, "x + y == 0 && y - x == (-1) * z");
  imprimir_entero(!b && w, "not b && w");

  return 0;
}

/*
  Para que cumpla con el resultado planteado en la consigna
  el estado debe valer (x → 4, y → -4, z → 8, b → 1, w → 0)
  
  Output:
  > El resultado de x % 4 == 0 = 1
  > El resultado de x + y == 0 && y - x == (-1) * z = 1
  > El resultado de not b && w = 0
*/