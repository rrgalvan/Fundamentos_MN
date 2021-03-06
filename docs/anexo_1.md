# Taller 2: Arrancando en C: Distancia y Norma

En este taller se exploran los conceptos de distancia euclídea y
norma sobre el espacio vectorial $\mathbb R^n$ utilizando programas
en lenguaje C. La idea es introducir tanto los conceptos matemáticos
como informáticos de forma real pero evitando todo lo posible el
enredarnos en detalles técnicos, definiciones, demostraciones,
etc. Todo ello se entiende que será objeto de estudio en el futuro.


## Datos, variables y expresiones aritméticas

Los objetos básicos manipulados por un programa  C son **datos**, contenidos en **variables**. Para actuar sobre estos datos, se utilizan **expresiones** que contienen *operadores* que actúan sobre ellos.

Cada objeto (datos, variables) tiene un **tipo** concreto, que determina qué valores puede contener y qué operaciones se pueden realizar sobre él. Antes de utilizar una variable, es necesario *declararla*, especificando cuál es su tipo, como veremos a continuación.



A continuación estudiaremos los tipos de datos más sencillos: enteros, reales y caracteres. Más adelante se verán otros tipos de datos más complejos, como los vectores, las cadenas de caracteres y los punteros.

### Enteros

Los enteros son el tipo de dato más primitivo en C. Según el tamaño de los datos que se quiera almacenar, existen distintos tipos de datos enteros: `short`, `int`, `long` y `long long`. Aunque el tamaño de estos tipos datos puede variar según el compilador y la plataforma de hardware (cada uno de estos tipos de datos puede ocupar desde 1 byte hasta 8 bytes en memoria), el tipo de datos `int` estándar viene dado por $4$ bytes (es decir, $4\cdot 8 = 32$ bits). Puedes encontrar más información en cualquier [guía de referencia de C](https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Referencia).

Además, el lenguaje C hace la distinción de si el entero es con signo (`signed`) o sin signo (`unsigned`). En caso de que no se declare si es con signo o sin signo, se toma con signo. El rango de valores de un tipo de datos viene dado por su signo y su tamaño en bytes. Por ejemplo:

- Un entero sin signo (`unsigned int` o simplemente `unsigned`) puede almacenar $2^{32}=4294967296$ valores, comprendidos entre $0$ y $4294967295$.

<img href="https://upload.wikimedia.org/wikipedia/commons/thumb/a/a9/IEEE_754_Double_Floating_Point_Format.svg/1024px-IEEE_754_Double_Floating_Point_Format.svg.png"></img>

- Un entero con signo (`int`) reparte estos $4294967296$ valores entre $-2147483648$ y $2147483647$.


¿Qué rango de valores admite un `short int` estándar, con y sin signo? ¿Y un `long int`?

Algunos ejemplos de declaraciones de enteros en C:

    int p;
    unsigned int m, n;
    long q = -10000000;

### Reales

Para representar números reales no enteros se utiliza la sistema de representación basado en la técnica de coma flotante, que permite operar con números reales de diversas magnitudes, mediante un número decimal llamado mantisa y un exponente que indica el orden de magnitud.

El tipo de dato flotante en lenguaje C utiliza dos tamaños: `float` (simple precisión) `double` (doble precisión), que ocupan 4 bytes y 8 bytes respectivamente. Puedes consultar información concreta sobre el almacenamiento de [números en coma flotante, recogida en el estándar IEEE 754-2008](https://es.wikipedia.org/wiki/IEEE_754). Comprobarás que:



    #include <stdio.h>

    int main()
    {
      int repetir_test = 1;
      float x, y;
      float abs_x, abs_y;

      while (repetir_test) {
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

        /* Calcular el valor absoluto de y (expresión de if en 1 sola línea) */
        if(y>0) {abs_y = y;} else {abs_y = -y;}

        printf("Comprobamos que se verifican las propiedades del valor absoluto:\n");

        /* Comprobar la primera propiedad de valor absoluto */
        printf("  1) x=%.2f, |x| = %.2f >= 0",    x, abs_x);
        printf("     y=%.2f, |y| = %.2f >= 0\n",  y, abs_y);
        if (x==0)  {
          printf("     x es cero (luego también |x| es cero)\n");
        }
        else {
          printf("     x no es cero (luego tampoco |x| lo es)\n");
        }
        if (x==0)
          printf("     y es cero (luego también |y| es cero)\n");
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

    }
