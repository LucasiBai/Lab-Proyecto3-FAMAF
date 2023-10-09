# include <stdio.h>

int main(void){

  int x,y,z;

  printf("Ingresa un valor para x\n");
  scanf("%d", &x);

  printf("Ingresa un valor para y\n");
  scanf("%d", &y);

  printf("Ingresa un valor para z\n");
  scanf("%d", &z);

  printf("El resultado de x + y + 1 = %d\n", x + y + 1);
  printf("El resultado de z * z + y * 45 - 15 * x = %d\n", z * z + y * 45 - 15 * x);
  printf("El resultado de y - 2 == (x * 3 + 1) %% 5 = %d\n", y - 2 == (x * 3 + 1) % 5);
  printf("El resultado de y / 2 * x = %d\n", y / 2 * x);
  printf("El resultado de y < x * z = %d\n", y < x * z);

  return 0;
}

/*
Expresión                   (x→7, y→3, z→5) (x→1, y→10, z→8)
x + y + 1                   11              12
z * z + y * 45 - 15 * x     55              499
y - 2 == (x * 3 + 1) % 5    0               0
y / 2 * x                   7               5
y < x * z                   1               0

¿En la última expresión, qué tipo tiene el resultado en lenguaje “C”?

Tiene tipo 'int', que es la forma en la que se representan booleanos en el
lenguaje, ya que 0 es 'false' y cualquier otro entero es 'true'
*/