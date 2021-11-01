#include <stdio.h>

int main()
{
  int repetir_test = 1;
  float x, y;
  float abs_x, abs_y;

  while(repetir_test)
    {
    /* Leer dos números reales */
    printf("Introduce un número real, x: ");
    scanf("%f", &x);
    printf("Introduce un número real, y: ");
    scanf("%f", &y);

    /* Calcular el valor absoluto de x */
    if(x>0) {
      abs_x = x;
    }
    else {
      abs_x = -x;
    }

    /* Calcular el valor absoluto de y */
    if(y>0) abs_y = y; else abs_y = -y;

    printf("Comprobamos que se verifican las propiedades del valor absoluto:\n");

    /* Comprobar la primera propiedad de valor absoluto */
    printf("  1) x=%.2f, |x| = %.2f >= 0,",    x, abs_x);
    printf("     y=%.2f, |y| = %.2f >= 0\n",  y, abs_y);
    if (x==0)  {
      printf("     x es cero (luego también |x| lo es)\n");
    }
    else {
      printf("     x no es cero (luego tampoco |x| lo es)\n");
    }
    if (x==0)
      printf("     y es cero (luego también |y| lo es)\n");
    else
      printf("     y no es cero (luego tampoco |y| lo es)\n");

    /* Comprobar la segunda propiedad de valor absoluto */
    float abs_x_mas_y = x+y > 0? x+y : -(x+y);  /* Calcular |x+y| */
    printf("  2) |x+y| = %.2f es menor o igual que |x|+|y|=%.2f\n",
           abs_x_mas_y, abs_x + abs_y);

    /* Comprobar la tercera propiedad de valor absoluto */
    float abs_x_por_y = x*y > 0? x*y : -(x*y);  /* Calcular |x*y| */
    printf("  3) |x·y| = %f = |x|·|y|\n", abs_x_por_y);

    /* Repetir test o terminar */
    printf("... introduce 0 para terminar o un entero no nulo para repetir: ");
    scanf("%d", &repetir_test);
  }

  return 0;
}
