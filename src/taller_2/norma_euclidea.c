#include <stdio.h>
#include <math.h>

// Devuelve el valor absoluto de un número real, x, en doble precisión
double valor_abs(double x)
{
  double result;
  if(x>=0) {
    result = x;
  }
  else {
    result = -x;
  }
  return result;
}

// Devuelve la norma euclídea de un vector (x1, x2), con argumentos en doble precisión //
double norma_euclidea(double x1, double x2)
{
  return sqrt(x1*x1 + x2*x2);
}


int main()
{
  int repetir_test = 1;
  double x1, x2;
  double y1, y2;
  double a;
  double norma_x, norma_y;

  while(repetir_test)
    {
    /* Leer dos números reales */
    printf("Introduce un vector  x1 x2  (2 números reales separados por espacios): ");
    scanf("%lf %lf", &x1, &x2);
    printf("Introduce un vector  y1 y2  (2 números reales separados por espacios): ");
    scanf("%lf %lf", &y1, &y2);

    norma_x = norma_euclidea(x1, x2);
    norma_y = norma_euclidea(y1, y2);

    printf("Comprobamos que se verifican las propiedades de la norma:\n");

    /* Comprobar la primera propiedad de norma */
    printf("  1) x=(%.2lf,%.2lf), ||x|| = %.3lf >= 0,",  x1, x2, norma_x);
    printf("     y=(%.2lf,%.2lf), ||y|| = %.3lf >= 0\n", y1, y2, norma_y);
    if (norma_x ==0)  {
      printf("     ||x|| es cero (luego x es el vector nulo)\n");
    }
    else {
      printf("     ||x|| no es cero (luego x no es el vector nulo)\n");
    }
    if (norma_y ==0)  {
      printf("     ||y|| es cero (luego y es el vector nulo)\n");
    }
    else {
      printf("     ||y|| no es cero (luego y no es el vector nulo)\n");
    }

    /* Comprobar la segunda propiedad de la norma */
    printf("  2) ||x+y|| = %.3f es menor o igual que ||x|| + ||y|| = %.3f\n",
           norma_euclidea(x1+y1, x2+y2), norma_x + norma_y);

    /* Comprobar la tercera propiedad de la norma */
    printf("Introduce un escalar, a (nº real, doble precisión): ");
    scanf("%lf", &a);

    printf("  3) ||a·x|| = %lf = |a|·||x|| (= %lf · %lf) \n",
           norma_euclidea(a*x1, a*x2), valor_abs(a), norma_euclidea(x1, x2));

    /* Repetir test o terminar */
    printf("... introduce 0 para terminar o un entero no nulo para repetir: ");
    scanf("%d", &repetir_test);
  }

  return 0;
}
