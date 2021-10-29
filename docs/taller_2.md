# Taller 2: Arrancando en C: Valor absoluto y norma

En este taller se exploran las propiedades del valor absoluto y se
introduce el concepto de norma norma sobre el espacio vectorial
$\mathbb R^n$ utilizando programas en lenguaje C. La idea es
introducir tanto los conceptos matemáticos como informáticos de forma
real pero evitando todo lo posible el enredarnos en detalles técnicos,
definiciones, demostraciones, etc. Todo ello se entiende que será
objeto de estudio en el futuro.


## Valor absoluto

Se define el valor absoluto de un número real como:

$$
|x| = \left\{
    \begin{aligned}
    x &\mbox{ si } x>0, \\
    -x &\mbox{ en otro caso.}
    \end{aligned}
    \right.
$$

En este programa se experimentan las propiedades del valor absoluto: para todo $x,y\in\mathbb R$,

1. $|x| \ge 0$ , siendo $|x|=0$ si y solo si $x=0$
2. $|x+y| \le |x|+|y|$
3. $|x \; y | = |x| \cdot |y|$

En el programa se introducen numerosas ideas básicas del lenguaje C: variables, comentarios, expresiones aritméticas, bucle *while*, condicionales, entrada y salida formateadas. Ver los comentarios que aparecen más adelante.

    #include <stdio.h>

    int main()
    {
      float x, y;
      float abs_x, abs_y;
      int repetir_test = 1;

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

    }

### Algunos comentarios:

1. El programa consiste en la definición de una función llamada *main*, cuyo contenido se especifica en líneas de código contenidas entre llaves \{  \}. Cada expresión termina con un punto y coma \;
2. Las líneas contenidas entre los símbolos /\* y \*/ son comentarios. Éstos son opcionales, es buena idea utilizarlos pero sin abusar de ellos.
3. El programa comienza declarando cinco variables, `x`, `y`, etc. En, todas las variables deben ser declaradas antes de utilizarse. Las cuatro primeras son de tipo `float` (número real en coma flotante de simple precisión) y la última es `int` (entero con signo). Existen otros tipos de datos simple como `double` (coma flotante de doble precisión) o `char` (carácter de 1 byte, 8 bits).
4. El bucle `while` opera de la siguiente forma:
    - Primero se evalúa la expresión escrita entre paréntesis (la variable `repetir_test`).
    - Si la condición es verdadera (en este caso, si el entero no es cero), se ejecuta su contenido y al terminar se vuelve a evaluar el condicional.
    - Cuando la condición sea falsa, el bucle termina.
5. La función `scanf` lee un carácter de la consola de entrada. La expresión de formato `"%f"` indica coma *f*flotante. El símbolo `&` se utiliza para que la variable que lo sigue pueda recibir su valor dentro de la función.
6. El bucle `if` evalúa una expresión (entre paréntesis). Si es verdadera ejecuta la primera expresión (entre llaves, `abs_x = x`). Si es falsa, ejecuta la segunda expresión en este caso `abs_x = -x`, después de `else`.
7. Una expresión puede escribirse varias líneas o en una sola, como en la línea `if(y>0)` etc.
8. En una expresión de formato como `%.2f` se indica el número de dígitos que se desea mostrar tras el punto decimal, en este caso 2.
9. Si un bloque de código consta de una sola expresión, como el segundo `if (x==0)`, las llaves pueden omitirse.
10. El [operador ternario de tipo `?`](https://es.wikipedia.org/wiki/Operador_ternario) se puede utilizar como substituto de condicionales `if`.

## Norma euclídea

Consideramos ahora el espacio vectorial $\mathbb R^n$, donde $n=1,2,3...$.
Introduciremos el concepto de *norma* de un vector $\mathbf x=(x_1,x_2,\dots, x_n)\in \mathbb R^n$, que puede entenderse como una generalización del valor absoluto. De hecho, para $n=1$ los conceptos de norma y valor absoluto coinciden.

En primer lugar: para $n=1$, podemos definir la distancia entre dos números reales como
$$
d(x,y)=|x-y|=+\sqrt{(x-y)^2}.
$$
Obviamente, la distancia a cero es $d(x,0)=|x|$.

En general, para cualquier $n\in\mathbb N$, definimos la **distancia
euclídea** entre dos puntos $\mathbf x = (x_1,x_2,\dots, x_n)$ e  $\mathbf
y=(y_1,y_2,\dots, y_n)$ como
$$
d(\mathbf x, \mathbf y) = +\sqrt{\sum_{i=1}^n (x_i - y_i)^2}.
$$

Por ejemplo, la distancia entre los puntos $\mathbf x=(2,0)$ e $\mathbf y=(0,1)$ de $\mathbb R^2$ es:
$$
d(\mathbf x, \mathbf y) = +\sqrt{(2-0)^2 + (0-1)^2} = +\sqrt{5} \simeq 2.2360679
$$

Ahora podemos definir la **norma euclídea** como «la
distancia a cero». Concretamente, para todo $\mathbf x=(x_1,x_2,\dots, x_n)\in \mathbb
R^n$, definimos

$$
\|\mathbf{x}\|
= +\sqrt{\sum_{i=1}^n x_i^2}.
$$

### Nota:

La norma euclídea también es conocida como «**norma 2**», y se denota $\|\mathbf{x}\|_2$, pues consiste en elevar a $p=2$ cada coordenada $x_i$ y tomar raíz $p$--ésima. Puede generalizarse a $\|\mathbf{x}\|_p$ para otros valores de $p$ (no necesariamente $p=2$).

### Propiedades de la norma

La norma tiene propiedades muy similares al valor absoluto.
Para todo $\mathbf x, \mathbf y\in\mathbb R^n$, y para todo $\alpha\in\mathbb R$:

1. $\|\mathbf x\| \ge 0$ , siendo $|\mathbf x|=0$ si y solo si $\mathbf x=0$
2. $\|\mathbf x+\mathbf y\| \le \|\mathbf x\|+\|\mathbf y\|$
3. $\| \alpha \; \mathbf y \| = |\alpha| \cdot \|\mathbf y\|$
