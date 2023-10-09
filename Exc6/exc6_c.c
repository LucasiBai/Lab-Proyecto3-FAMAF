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
  int x, y, z, m;

  x = pedir_entero("x");
  y = pedir_entero("y");
  z = pedir_entero("z");

  if(x<y){
    m = x;
  }else if (x>=y){
    m = y;
  }

  if(m>=z){
    m = z;
  } 

  imprimir_entero(x, "x");
  imprimir_entero(y, "y");
  imprimir_entero(z, "z");
  imprimir_entero(m, "m");

  return 0;
}

/*
  Esta forma de escribir 4.b ayuda a tener que escribir menos código,
  permitiendo tener uno más legible. Al mismo tiempo nos da la posibilidad
  de que sea más escalable, ya que con modificar la función que nos interesa
  cambiar su funcionalidad, esta se ve replicada en donde se usa la funcion actualmente.

  Podría crear una función que se lleve la funcionalidad de buscar
  el menor con el protipo 'int obtener_menor(int x, int y, int z)'

  Podríamos utilizar estas funciones en todos los programas ya realizados
  del proyecto. Ya que en todos se solicita un valor para variables y se
  muestra por terminal.
*/