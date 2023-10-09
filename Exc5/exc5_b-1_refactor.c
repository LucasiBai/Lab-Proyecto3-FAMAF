# include <stdio.h>

int pedir_entero(char* name){
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

int main(void){
  int x, y, i;

  x = pedir_entero("x");
  y = pedir_entero("y");

  i = 0;

  while (x>=y)
  {
    x = x - y;
    i = i + 1;
  }

  printf("El estado obtenido es (x → %d, y → %d, i → %d)\n", x, y, i);
  return 0;
}

/*
  Iteraciones:
  σ0: (x → 13, y → 3, i → 0)
  σ1: (x → 10, y → 3, i → 1)
  σ2: (x → 7, y → 3, i → 2)
  σ3: (x → 4, y → 3, i → 3)
  σ4: (x → 1, y → 3, i → 4)

  Programa      Estado Inicial          Estado obtenido
  Ej 1          (x → 13, y → 3, i → 0)  (x → 1, y → 3, i → 4)
  Ej 2          (x → 4, y → 3, i → 0)   (x → 1, y → 3, i → 1)
  Ej 3          (x → 20, y → 5, i → 0)  (x → 0, y → 5, i → 4)

  El programa realiza la división entera x / y donde 'i' es el
  cociente resultante.
*/