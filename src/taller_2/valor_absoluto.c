#include <stdio.h>
#include <assert.h>

int main()
{
  int i, abs_i;
  float x, abs_x;

  /* Leer un número entero */
  printf("Introduce un número entero y un número real (coma flotante): ");
  scanf("%d %f", &i, &x);

  /* Calcular el valor absoluto de i */
  if(i>0) {
    abs_i = i;
  }
  else {
    abs_i = -i;
  }

  /* Calcular el valor absoluto de x */
  if(x>0) {
    abs_x = x;
  }
  else {
    abs_x = -x;
  }

  printf("Comprobamos que se verifican las propiedades del valor absoluto:\n");
  printf("1) |%d| = %d > 0,   |%f| = %f > 0\n", i, abs_i, x, abs_x);
  assert(abs_i > 0);
  assert(abs_x > 0);

  /* Imprimir el resultado */
  printf("Su valor absoluto es %i", abs_i);

}
