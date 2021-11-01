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

    return 0;
     }

### Algunos comentarios:

1. El programa consiste en la definición de una función llamada *main*, cuyo contenido se especifica en líneas de código contenidas entre llaves \{  \}. Cada expresión termina con un punto y coma \;
2. Las líneas contenidas entre los símbolos /\* y \*/ son comentarios. Éstos son opcionales, es buena idea utilizarlos pero sin abusar de ellos.
3. El programa comienza declarando cinco variables, `x`, `y`, etc. En, todas las variables deben ser declaradas antes de utilizarse. Las cuatro primeras son de tipo `float` (número real en coma flotante de simple precisión) y la última es `int` (entero con signo). Existen otros tipos de datos simple como `double` (coma flotante de doble precisión) o `char` (carácter de 1 byte, 8 bits).
4. El bucle `while` opera de la siguiente forma:
    - Primero se evalúa la expresión escrita entre paréntesis (la variable `repetir_test`).
    - Si la condición es verdadera (en este caso, si el entero no es cero), se ejecuta su contenido y al terminar se vuelve a evaluar el condicional.
    - Cuando la condición sea falsa, el bucle termina.
5. La función `scanf` lee un carácter de la consola de entrada. La expresión de formato `"%f"` indica coma *f*flotante. El símbolo `&` se utiliza para que la variable que lo sigue pueda recibir su valor dentro de la función. Técnicamente, este símbolo indica que el parámetro se pasa *por referencia*. Hablaremos más de esto en próximos talleres.
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
3. $\| \alpha \; \mathbf x \| = |\alpha| \cdot \|\mathbf x\|$

En el siguiente programa se experimenta con estas propiedades en $\mathbb R^2$:

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
        printf("Introduce un vector  x1 x2  (2 reales separados por espacios): ");
        scanf("%lf %lf", &x1, &x2);
        printf("Introduce un vector  y1 y2  (2 reales separados por espacios): ");
        scanf("%lf %lf", &y1, &y2);

        norma_x = norma_euclidea(x1, x2);
        norma_y = norma_euclidea(y1, y2);

        printf("Comprobamos que se verifican las propiedades de la norma:\n");

        /* Comprobar la primera propiedad de norma */
        printf("  1) x=(%.2lf,%.2lf), ||x|| = %.3lf >= 0,",  x1, x2, norma_x);
        printf("     y=(%.2lf,%.2lf), ||y|| = %.3lf >= 0\n", y1, y2, norma_y);
        if (norma_x==0)  {
          printf("     ||x|| es cero (luego x es el vector nulo)\n");
        }
        else {
          printf("     ||x|| no es cero (luego x no es el vector nulo)\n");
        }
        if (norma_y==0)  {
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

### Algunos comentarios:

1. En el programa hemos definido dos funciones matemáticas (antes de ser usadas en la función *main*) para representar, respectivamente, a los concpetos de valor absoluto de un número real $x$ y norma euclídea de un vector de $\mathbb R^2$, $(x_1, x_2)$.

    1. La función `valor_abs` toma como parámetro un número real en doble precisión (`double`) y devuelve un número del mismo tipo
    2. La función `norma_euclidea` toma dos parámetros reales, `x1` y `x2` y devuelve la norma euclídea del vector correspondiente. En el cuerpo de la función se utiliza la función `sqrt` de la biblioteca matemática. Para poder utilizarla, se debe incluir la biblioteca `math.h` (al principio del programa) y (al menos para el compilador *gcc*) el programa debe enlazarse con esta biblioteca, utilizando la opción `-lm`. Esta opción vendrá dada «de serie» por algunos entornos de compilación. En otros casos, como con el editor *Atom*, es probable que debamos especificarlo en la configuración del paquete correspondiente.

2. Estas funciones se podrían haber definido después de *main*, pero en ese caso deberían haber sido declaradas en el *preámbulo* (antes de *main*). La forma declarar una función es:


        tipo nombre_función (tipo param1, tipo param2, ...);

3. Es fundamental habituarse a descomponer los programas C en funciones, que funcionarán como módulos independientes encargados de realizar tareas específicas. La [programación modular](https://es.wikipedia.org/wiki/Programaci%C3%B3n_modular) es un paradigma de programación que consiste en dividir un programa en módulos o subprogramas con el fin de hacerlo más legible y manejable.
<div  align="center"><img src="https://upload.wikimedia.org/wikipedia/commons/9/98/Subprograma.svg" width="33%"></div>

## Norma 1 y norma infinito

Además de la euclídea, existen dos normas en $\mathbb R^n$ muy usadas:

- La **norma 1**, definida para cada $\mathbf x = (x_1,\dots,x_n)$ como

$$
\|\mathbf x\|_1 = \sum_{i=1}^n |x_i|.
$$

- La **norma infinito**, que para cada $\mathbf x = (x_1,\dots,x_n)$ se define como

$$
\|\mathbf x\|_\infty = \mbox{máx} (|x_1|, |x_2|,\dots, |x_n| ).
$$

Por ejemplo, para el vector $\mathbf x = (2, -3, 1)$ tendremos:

- $\|\mathbf x\|_1 = 6$
- $\|\mathbf x\|_2 = +\sqrt{14} \simeq 3.74165738$
- $\|\mathbf x\|_\infty = 3$

## Ejercicios: jugando con normas

### Ejercicio 1 (¡fácil!)
Modifica el programa anterior, sustituyendo la función `norma_euclidea` por otra llamada `norma_uno` y comprueba con ejemplos que la norma 1 verifica las propiedades de norma enumeradas anteriormente. Repite el proceso definiendo la función `norma_infinito`. Para definir estas funciones, te será útil utilizar la función `valor_abs`.

### Ejercicio 2 (¡fácil!)
Realiza un programa que, tras leer un vector $\mathbf x \in R^3$,  imprima $\|\mathbf x\|_1$, $\|\mathbf x\|_2$ y $\|\mathbf x\|_\infty$. Compruébalo con  $\mathbf x = (2, -3, 1)$ y con otros ejemplos.

### Ejercicio 3 (¿un poco más difícil?)
Como podrás ver en los resultados del programa anterior, siempre se tiene que
$$
    \|\mathbf x\|_\infty \le \|\mathbf x\|_2 \le \|\mathbf x\|_1.
$$
¿Puedes demostrar alguna de estas dos desigualdades? ¡Ojo no vale demostrar con ejemplos! En matemáticas, una afirmación no es cierta, por muchos ejemplos que parezcan confirmarla, hasta que es demostrada mediante un razonamiento formal.

### Ejercicio 4 (¡fácil!)
Llamamos norma sobre $\mathbb R^n$ a cualquier aplicación $\| \cdot
\|: \mathbb R^n \to \mathbb R^+$ que verifique las propiedades 1, 2 y
3 que fueron enunciadas anteriormente (para la norma euclídea).  Se dice que
dos normas $\|\cdot\|_A$ y $\|\cdot\|_B$ **son equivalentes** si
existen dos constantes positivas, $C_1$ y $C_2$ tales que (para todo $\mathbf
x$) se verifican las dos desigualdades siguientes:

- $\|\mathbf x\|_A \le C_1 \, \|\mathbf x \|_B$
- $\|\mathbf x\|_B \le C_2 \, \|\mathbf x \|_A$

Ya sabemos, por el ejercicio anterior, que $\|\mathbf x\|_\infty \le C_1 \|\mathbf x\|_2$, con $C_1=1$. Vamos a experimentar con el ordenador si  $\|\mathbf x\|_2 \le C_2 \, \|\mathbf x \|_\infty$ para alguna constante $C_2$. Para ello, realiza un programa que, tras leer el valor de un vector $\mathbf x = (x_1,x_2)\in \mathbb R^2$, imprima:

1. Los valores de  $\|\mathbf x\|_2$ y $\|\mathbf x\|_\infty$
2. El cociente

$$
\frac{\|\mathbf x\|_2} {\|\mathbf x\|_\infty}
$$

Prueba con muchos ejemplos. A la vista de ellos, ¿podrías conjeturar
que este cociente siempre (para todo $\mathbf x\in \mathbb R^2$) está
acotado superiormente por algún valor $C_2$? Si es así, ¡esa sería la
constante que estamos buscando!

### *Spoiler* al ejercicio anterior
Esa constante, $C_2$ tal que $\|\mathbf x\|_2 \le C_2 \, \|\mathbf x
\|_\infty$, sí que existe. Y estas dos normas son equivalentes en
$\mathbb R^n$ (de hecho, en todo espacio finito-dimensional, aunque
¡en *espacios de dimensión infinita*, esta afirmación no es cierta!
para las normas $\infty$ y 2 generalizadas).

También la norma 1 es equivalente con las anteriores. De hecho se tiene el siguiente resultado (que se demuestra en el Grado en Matemáticas):
#### Teorema
**Todas** las normas en $\mathbb R^n$ **son equivalentes**.

Eso sí, el teorema no da los valores de las constantes $C_1$ y $C_2$, estos deben calcularse para cada caso particular.
