# Primeros Pasos

En esta sección se introducen algunas definiciones sobre conceptos relacionados con los algoritmos numéricos y el lenguaje C. Se ofrecen algunas sugerencias para instalar un entorno de desarrollo en C y se introduce un primer ejemplo de este lenguaje.

## Algoritmos

Sin entrar en una definición más precisa, entenderemos por [algoritmo](https://es.wikipedia.org/wiki/Algoritmo) a un conjunto de pasos, instrucciones o acciones lógicas que se deben seguir para resolver un problema, de forma que:

- Cada uno de estos pasos está definido sin ambigüedad
- El algoritmo termina un tiempo finito después de ejecutar todos los pasos.

Buena parte de los [métodos numéricos](https://es.wikipedia.org/wiki/An%C3%A1lisis_num%C3%A9rico) se centra en el desarrollo y análisis matemático de algoritmos para  calcular aproximaciones (tan exactas como deseemos) de la solución de problemas concretos.

**Ejemplo**: Consideremos el siguiente algoritmo (método de Newton) para aproximar una raíz o cero de una función $f(x)$, es decir, un número $\alpha\in\mathbb R$ tal que $f(\alpha)=0$:

- Datos de entrada: una función real de una variable, $f(x)$, su derivada, $f'(x)$, una estimación $x_0\in\mathbb R$, y el número máximo de iteraciones, $N\in\mathbb N$:

- Repetir, para cada $k\in\{0, N-1\}$:
$$
x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}
$$

Un *análisis numérico* aplicado a este algoritmo nos garantizará que, bajo determinadas hipótesis (por ejemplo, $f'\neq0$ «cerca de $\alpha$») se tiene que $x_k \to \alpha$ (o sea, $\lim_{k\to +\infty} x_k = \alpha$). Más aún: para cualquier $k\in\mathbb N$, se puede estimar el error o diferencia entre $x_k$ y $\alpha$ (y por supuesto todo ello ¡sin saber cuál es el valor $\alpha$, la solución exacta!).

Un [programa](https://es.wikipedia.org/wiki/Programa_inform%C3%A1tico) es una secuencia de instrucciones escritas en un determinado lenguaje de ordenador para realizar o implementar uno o más algoritmos. Más adelante, *programaremos el algoritmo anterior en lenguaje C*, para calcular un cero de una función concreta. Pero antes de ello, será necesario realizar una introducción a este lenguaje, a lo que nos dedicamos a continuación.

Nota: quizás ya tengas curiosidad sobre qué pinta tendría una [implementación en lenguaje C del algoritmo de Newton](ejemplo_Newton_C.md): pincha en el enlace para verlo.


## Lenguajes de ordenador

- El **[lenguaje de máquina](https://es.wikipedia.org/wiki/Lenguaje_de_máquina)** consiste en una serie de instrucciones de básicas de control que se almacenan en la [memoria del ordenador](https://es.wikipedia.org/wiki/Memoria_(inform%C3%A1tica)) (como secuencias de dígitos binarios $\{0,1\}$) y que la [unidad central de procesamiento](https://es.wikipedia.org/wiki/Unidad_central_de_procesamiento) (la CPU) puede *ejecutar directamente*. Podríamos decir que es «el único lenguaje que entiende el ordenador».

<!-- end list -->

  - Los **[lenguajes de
    programación](https://es.wikipedia.org/wiki/Lenguaje_de_programación)**
    son el medio de comunicación entre el programador y una
    computadora. El programador escribe los algoritmos en algún
    lenguaje de programación y utiliza las herramientas previstas por
    ese lenguaje para transformarlo en lenguaje de máquina, ejecutable
    por el ordenador.

<!-- end list -->


Además de etiquetarse según distintos estilos o [paradigmas de programación](https://es.wikipedia.org/wiki/Paradigma_de_programaci%C3%B3n)  (imperativa, declarativa, orientada a objetos, etc), los lenguajes de programación se pueden clasificar como sigue:

#### Alto o bajo nivel

Los [lenguajes de bajo nivel](https://es.wikipedia.org/wiki/Lenguaje_de_bajo_nivel) son aquellos más cercanos al lenguaje máquina y por tanto ejercen un control directo sobre el hardware.

**[C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n))** es un [lenguaje de alto nivel](https://es.wikipedia.org/wiki/Lenguaje_de_alto_nivel), es decir más cercano al lenguaje humano que el lenguaje máquina. Aunque tiene muchas características de
lenguaje de bajo nivel (como el uso que permite hacer de la memoria).
Estas características hacen que C sea un lenguaje muy potente, ya que
permite optimizar al máximo los recursos de la máquina. Por ende, esto
también hace que la dificultad y que los errores que se puedan cometer
programando aumenten. Así, con frecuencia, a C se le considera de nivel medio.


Lenguajes de **más alto nivel que C** son aquellos en los que el
programador no necesita encargarse de manipular directamente el
s de más alto nivel y añade éste capacidades para la orientación a objetos y otros paradigmas.

Otros lenguajes de alto nivel (todos de mayor nivel que *C*)
muy usados en métodos numéricos son:
**[Matlab](https://es.wikipedia.org/wiki/MATLAB)/[Octave](https://es.wikipedia.org/wiki/GNU_Octave)**,
**[Python](https://es.wikipedia.org/wiki/Python)**, **[Fortran](https://es.wikipedia.org/wiki/Fortran)**, **[Julia](https://es.wikipedia.org/wiki/Julia_(lenguaje_de_programaci%C3%B3n))**.
**[Mathematica](https://es.wikipedia.org/wiki/Mathematica)** y **[R](https://es.wikipedia.org/wiki/R_(lenguaje_de_programaci%C3%B3n))** son lenguajes muy usados en matemáticas y estadística y, con frecuencia, también en métodos numéricos.
Otros lenguajes de alto nivel muy utilizados:
**[Java](https://es.wikipedia.org/wiki/Lenguaje_de_programación_Java)**,
*[C\#](https://es.wikipedia.org/wiki/C_Sharp)**.

#### Compilados o interpretados

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

## Instalación de un entorno de desarrollo en C

Para empezar a programar, necesitarás un entorno de desarrollo que, como mínimo, conste de un **editor** para escribir el código fuente y un **compilador** para transformarlo en código máquina o ejecutable. Los editores especializados ofrecen la opción de llamar al compilador para realizar el proceso de compilación y ejecución del código.

Existen numerosas alternativas con [licencia libre](https://es.wikipedia.org/wiki/Contenido_libre) como [Dev-C++](https://es.wikipedia.org/wiki/Dev-C%2B%2B) o [Code::Blocks](https://es.wikipedia.org/wiki/Code::Blocks), editores que usualmente se integran con el compilador **gcc**.

Existe otra alternativa, de la que hablaremos a continuación: el editor [Atom](https://es.wikipedia.org/wiki/Atom_(software)) y su integración con *gcc*.

### El compilador *gcc*

Este compilador, que es parte de la *[colección de compiladores de GNU](https://es.wikipedia.org/wiki/GNU_Compiler_Collection) (junto a otros como `g++`, compilador de C++):

* Está disponible directamente en los sistemas **GNU/Linux**.

* En **MacOS** se requiere la instalación de [Xcode](https://apps.apple.com/es/app/xcode/id497799835?mt=12), disponible directamente en la *Mac App Store*.

* En **Windows**, basta instalar **[MinGW](https://es.wikipedia.org/wiki/MinGW)**, un proyecto para portar a plataformas Windows la familia de compiladores de GNU. Para instarlo, basta [descargarlo de su página web](https://www.mingw-w64.org/downloads/).  Además, deberás asegurarse de que la carpeta donde se haya instalado el programa *gcc* haya sido añadida a la variable de sistema *PATH*. **Es fácil, [puedes ver los detalles (por ejemplo) en este *tutorial*](https://www.youtube.com/watch?v=sXW2VLrQ3Bs)**:
<div style="line-height:5pt; margin-left:42px;">
<iframe width="560" height="315" src="https://www.youtube.com/embed/sXW2VLrQ3Bs" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
<p/>&nbsp;
</div>

### Atom

Atom es un editor de código fuente disponible con licencia libre para Windows, MacOS, GNU/Linux. Es un editor moderno y con características avanzadas, como el soporte de paquetes (extensiones). Mediante paquetes, Atom soporta prácticamente cualquier lenguaje de programación conocido. Entre ellos, nos resultará muy útil el paquete [`gpp-compiler`](https://atom.io/packages/gpp-compiler).

* Para la **instalación**, es suficiente descargar el programa de su [página
web](https://atom.io/) y proceder de la forma habitual en cada sistema
operativo.
* Una vez instalado el editor, añadimos el paquete [`gpp-compiler`](https://atom.io/packages/gpp-compiler), que permitirá iniciar el proceso de compilación (y ejecución del programa) directamente desde el editor.

* **[Puedes ver los detalles de la instalación en este *tutorial*](https://www.youtube.com/watch?v=9aneqcQD1Gs)** (centrado en Windows, pero generalizable al resto de sistemas operativos):
<div style="line-height:5pt; margin-left:42px;">
<iframe width="560" height="315" src="https://www.youtube.com/embed/9aneqcQD1Gs" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
<p/>&nbsp;
</div>


## Primer programa en C

Con nuestro entorno de desarrollo preparado, podemos escribir nuestro
primer programa en C.  Es tradicional empezar a aprender un lenguaje
de programación con un ejemplo que imprima en pantalla un mensaje de
saludo «[hola mundo](https://es.wikipedia.org/wiki/Hola_mundo)».


	#include <stdio.h>

	int main()
	{
	    printf("Hola mundo!\n");
        return 0;
	}


Analizaremos brevemente este programa.

Es probable que lo primero que salte a la vista sea la línea:

	    printf("Hola mundo!\n");

Esta es la línea que hace aparecer la cadena de caracteres `Hola Mundo` en nuestra pantalla. Notamos que para imprimir algo por pantalla es podemos usar la **sentencia** (la *orden*) `printf()` escribiendo entre paréntesis lo que deseemos imprimir.

El utilizar paréntesis se debe a que en C, `printf` es una **función**, que imprime su **argumento** (la cadena `Hola Mundo\n`) en la pantalla.  Se denomina *invocar* o *llamar* a una función a la acción de utilizarla para que realice una acción

Podemos observar también que la cadena a imprimir termina con una extraña combinación: `\n`. La combinación `\n` no representa a dos caracteres independientes, sino que a un único carácter no imprimible: el salto de línea. En este caso, se utiliza, después del texto `Hola Mundo` se pasar a la siguiente línea en la pantalla.

Lo último a resaltar es que la línea termina con un punto y coma. En C, todas las sentencias terminan con un punto y coma.


En el ejemplo, la función `printf` es invocada desde de un bloque de código de la forma:


    int main()
    {
        ...
    }

Las llaves delimitan un bloque, es decir, un grupo de sentencias que se ejecutarán de forma secuencial. La línea previa

    int main()

indica la definición de una función, en este caso llamada **`main`**. El lenguaje C (y en general en todos los lenguajes de [programación estructurada](https://es.wikipedia.org/wiki/Programaci%C3%B3n_estructurada)) se fundamenta en la definición de funciones que realizan tareas específicas.
La función `main` es especial, porque es el la que se invoca cuando se ejecuta el programa.


Observemos ahora la última sentencia de la función `main`:

    return 0;


Esta orden finaliza  la función `main` (y, por tanto, **finaliza el programa**) y devuelve un valor numérico entero (de ahí la expresión *`int`* previa a `main`), en este caso $0$ (que será interpretado por el sistema operativo para saber que el programa ha funcionado bien, sin fallos).



Pues es la definición de una función, en este caso llamada main. En C (y en general en todos los lenguajes de programación estructurada) todo se hace a base de funciones, como main y printf.

La función main es especial, porque es el la que se invoca cuando se ejecuta el programa. Todos los programas en C comienzan su ejecución al principio de la función main, y cuando ésta acaba, el programa también.

Veamos con más detalle la definición de la función:

    int main()
    {
        ...
    }


 El nombre de la función que viene a continuación, entre llaves, es main.


 La función devuelve como resultado un número entero, int (que es el 0 de la instrucción return).[2]

Finalmente, centramos la atención a la línea situada al principio del programa, y un tanto aparte (está separada del resto por una línea en blanco):

	#include <stdio.h>

Se trata de una instrucción del preprocesador de C, como nos lo indica el símbolo `#`, y lo que hace es incluir en ese punto el contenido del fichero `stdio.h` que es el que contiene la definición de la función `printf()`, que hemos utilizado en nuestro programa. Esta función, `printf()` forma parte de la [biblioteca estándar de C](https://es.wikipedia.org/wiki/Biblioteca_est%C3%A1ndar_de_C).
