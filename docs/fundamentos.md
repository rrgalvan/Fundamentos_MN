## Fundamentos de programación

### ¿Qué es un algoritmo?

Sin entrar en una definición más precisa, entenderemos por [algoritmo](https://es.wikipedia.org/wiki/Algoritmo) a un conjunto de pasos, instrucciones o acciones lógicas que se deben seguir para resolver un problema, de forma que:

- Cada uno de estos pasos está definido sin ambigüedad
- El algoritmo termina un tiempo finito después de ejecutar todos los pasos.

Buena parte de los [métodos numéricos](https://es.wikipedia.org/wiki/An%C3%A1lisis_num%C3%A9rico) se centra en el desarrollo y análisis matemático de algoritmos para  calcular aproximaciones (tan exactas como deseemos) de la solución de problemas concretos.

**Ejemplo**: Consideremos el siguiente algoritmo (método de Newton) para aproximar una raíz de una función $f(x)$, es decir, un número $\alpha\in\mathbb R$ tal que $f(\alpha)=0$:

- Datos de entrada: una función real de una variable, $f(x)$, su derivada, $f'(x)$, una estimación $x_0\in\mathbb R$, y el número máximo de iteraciones, $N\in\mathbb N$:

- Repetir, para cada $k\in\{0, N-1\}$:
$$
x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}
$$

Bajo determinadas hipótesis (por ejemplo, $f'\neq0$ «cerca de $\alpha$») se puede demostrar que $x_k \to \alpha$ y, para cualquier $k$, se puede estimar el error (la diferencia) entre $x_k$ y $\alpha$.

Un [programa](https://es.wikipedia.org/wiki/Programa_inform%C3%A1tico) es una secuencia de instrucciones escritas en un determinado lenguaje de ordenador para realizar o implementar uno o más algoritmos.

Un algoritmo es independiente del lenguaje de ordenador o la máquina donde se implemente.

### Lenguajes de ordenador

- El **[lenguaje de máquina](https://es.wikipedia.org/wiki/Lenguaje_de_máquina)** es el único lenguaje que la computadora es capaz de ejecutar. Consiste en una serie de instrucciones de básicas de control que se almacenan en la [memoria del ordenador](https://es.wikipedia.org/wiki/Memoria_(inform%C3%A1tica)) (en forma de dígitos binarios) y que la [unidad central de procesamiento](https://es.wikipedia.org/wiki/Unidad_central_de_procesamiento) (la CPU) puede ejecutar directamente.

<!-- end list -->

  - Los **[lenguajes de
    programación](https://es.wikipedia.org/wiki/Lenguaje_de_programación)** son el
    medio de comunicación entre el programador y una computadora. El
    programador escribe en algún lenguaje de programación y utiliza las
    herramientas previstas por ese lenguaje para transformarlo en
    lenguaje de máquina.

<!-- end list -->


Además de según los distintos modelos o [paradigmas de programación](https://es.wikipedia.org/wiki/Paradigma_de_programaci%C3%B3n)  (imperativa, declarativa, orientada a objetos, etc), los lenguajes de programación se pueden clasificar como sigue.

##### Alto o bajo nivel

Los [lenguajes de bajo nivel](https://es.wikipedia.org/wiki/Lenguaje_de_bajo_nivel) son aquellos más cercanos al lenguaje máquina y por tanto ejercen un control directo sobre el hardware.

**[C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n))** es un [lenguaje de alto nivel](https://es.wikipedia.org/wiki/Lenguaje_de_alto_nivel), es decir más cercano al lenguaje humano que el lenguaje máquina. Aunque tiene muchas características de
lenguaje de bajo nivel (como el uso que permite hacer de la memoria).
Estas características hacen que C sea un lenguaje muy potente, ya que
permite optimizar al máximo los recursos de la máquina. Por ende, esto
también hace que la dificultad y que los errores que se puedan cometer
programando aumenten. Así, con frecuencia, a C se le considera de nivel medio.

Lenguajes de **más alto nivel que C** son aquellos en los que el
programador no necesita encargarse de manipular directamente el
hardware, en particular la memoria. Algunos lenguajes de alto nivel
muy usados en métodos numéricos:
**[Matlab](https://es.wikipedia.org/wiki/MATLAB)/[Octave](https://es.wikipedia.org/wiki/GNU_Octave)**,
**[Python](https://es.wikipedia.org/wiki/Python)**, **[Fortran](https://es.wikipedia.org/wiki/Fortran)**, **[Julia](https://es.wikipedia.org/wiki/Julia_(lenguaje_de_programaci%C3%B3n))**.
**[Mathematica](https://es.wikipedia.org/wiki/Mathematica)** y **[R](https://es.wikipedia.org/wiki/R_(lenguaje_de_programaci%C3%B3n))** son lenguajes muy usados en matemáticas y estadística y, con frecuencia, también en métodos numéricos.
Otros lenguajes de alto nivel muy utilizados:
**[Java](https://es.wikipedia.org/wiki/Lenguaje_de_programación_Java)**,
**[C\#](https://es.wikipedia.org/wiki/C_Sharp)**.

##### Compilados o interpretados

Los lenguajes de programación se pueden también clasificar en función de
la forma en que se ejecutan sus órdenes. Existen lenguajes que son
**[interpretados](https://es.wikipedia.org/wiki/Lenguaje_interpretado)**,
en los que las órdenes reflejadas en el código fuente pasan a través
de un programa (llamado un *intérprete*) que se encarga de ejecutarlas
directamente, en el mismo momento en que están siendo leídas por el
intérprete. Lenguaje de este tipo muy usados en el cálculo numérico son:
**[Matlab](https://es.wikipedia.org/wiki/MATLAB)/[Octave](https://es.wikipedia.org/wiki/GNU_Octave)** y **[Python](https://es.wikipedia.org/wiki/Python)**.

Por contra, en los lenguajes
**[compilados](https://es.wikipedia.org/wiki/Lenguaje_compilado)** (como el mismo **[C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n))**,  **[Fortran](https://es.wikipedia.org/wiki/Fortran)** o, en cierto sentido, **[Julia](https://es.wikipedia.org/wiki/Julia_(lenguaje_de_programaci%C3%B3n))**)
las órdenes descritas en su código fuente pasan por un proceso de ***compilación*** (transformación en código máquina por un programa llamado **[compilador](https://es.wikipedia.org/wiki/Compilador)** que se almacena en un fichero o [archivo ejecutable](https://es.wikipedia.org/wiki/Ejecutable). Ese archivo puede
ejecutarse posteriormente y de forma directa, es decir sin recurrir a un intérprete.

- **Ventajas de los lenguajes interpretados**: Suelen ser muy portables
  (entre distintos tipos de ordenadores, siempre que cuenten con un
  intérprete), de programación más ágil y de más alto nivel.

- **Ventajas de los lenguajes compilados**: suelen tener mayor la
  velocidad de ejecución y mayor eficiencia (menor consumo de memoria
  u otros recursos del ordenador). Y de entre los lenguajes compilados
  usuales, es común considerar a **C** el de *mayor velocidad* y menor
  consumo de recursos, en general.

Típicamente, un algoritmo que debe ser probado y analizado en métodos numéricos, se desarrollará utilizando un lenguaje interpretado. Si se desea experimentar su potencia o explotarlo como producto final, se desarrollará en un lenguaje compilado.
