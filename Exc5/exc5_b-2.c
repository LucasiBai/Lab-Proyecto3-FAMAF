# include <stdio.h>
# include <stdbool.h>

int main(void){
  int x, i, res;

  printf("Ingrese un valor para x\n");
  scanf("%d", &x);

  i = 2;
  res = true;

  while(i<x&&res)
  {
    res = res && (x%i != 0);
    i = i + 1;
  }

  printf("El estado obtenido es (x → %d, i → %d, res → %d)\n", x, i, res);
  return 0;
}

/*
  Iteraciones:
  σ0: (x → 5, i → 0, res → False)
  σ1: (x → 5, i → 2, res → True)
  σ2: (x → 5, i → 3, res → True)
  σ3: (x → 5, i → 4, res → True)
  σ4: (x → 5, i → 5, res → True)

  Programa      Estado Inicial              Estado obtenido
  Ej 1          (x → 5, i → 0, res → False) (x → 5, i → 5, res → True)
  Ej 2          (x → 42, i → 0, i → False)  (x → 42, i → 3, res → False)
  Ej 3          (x → 37, i → 0, i → False)  (x → 37, i → 37, res → True)

  El programa verifica si el 'x' ingresado es primo.
*/