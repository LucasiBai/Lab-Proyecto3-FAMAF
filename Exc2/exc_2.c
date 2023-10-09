# include <stdio.h>

int main(void){
  int x, y, z, b, w;

  printf("Ingresa un valor para x\n");
  scanf("%d", &x);

  printf("Ingresa un valor para y\n");
  scanf("%d", &y);

  printf("Ingresa un valor para z\n");
  scanf("%d", &z);

  printf("Ingresa un valor para b\n");
  scanf("%d", &b);

  printf("Ingresa un valor para w\n");
  scanf("%d", &w);

  printf("El resultado de x %% 4 == 0 = %d\n", x % 4 == 0 );
  printf("El resultado de x + y == 0 && y - x == (-1) * z = %d\n", x + y == 0 && y - x == (-1) * z );
  printf("El resultado de not b && w = %d\n", !b && w);

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