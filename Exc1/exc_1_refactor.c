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

  int x,y,z;

  x = pedir_entero("x");
  y = pedir_entero("y");
  z = pedir_entero("z");

  imprimir_entero(x + y + 1, "x + y + 1");
  imprimir_entero(z * z + y * 45 - 15 * x, "z * z + y * 45 - 15 * x");
  imprimir_entero( y - 2 == (x * 3 + 1) % 5, "y - 2 == (x * 3 + 1) %% 5");
  imprimir_entero( y / 2 * x, "y / 2 * x");
  imprimir_entero( y < x * z, "y < x * z");

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