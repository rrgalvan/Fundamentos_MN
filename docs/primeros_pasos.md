## Primeros pasos

### Instalación de un entorno de desarrollo en C

Para empezar a programar, necesitarás un entorno de desarrollo que, como mínimo, conste de un **editor** para escribir el código fuente y un **compilador** para transformarlo en código máquina o ejecutable. Los editores especializados ofrecen la opción de llamar al compilador para realizar el proceso de compilación y ejecución del código.

Existen numerosas alternativas con [licencia libre](https://es.wikipedia.org/wiki/Contenido_libre) como [Dev-C++](https://es.wikipedia.org/wiki/Dev-C%2B%2B) o [Code::Blocks](https://es.wikipedia.org/wiki/Code::Blocks), editores que usualmente se integran con el compilador **gcc**.

Existe otra alternativa, de la que hablaremos a continuación: el editor [Atom](https://es.wikipedia.org/wiki/Atom_(software)) y su integración con *gcc*.

#### El compilador *gcc*

Este compilador, que es parte de la *[colección de compiladores de GNU](https://es.wikipedia.org/wiki/GNU_Compiler_Collection) (junto a otros como `g++`, compilador de C++):

* Está disponible directamente en los sistemas **GNU/Linux**.

* En **MacOS** se requiere la instalación de [Xcode](https://apps.apple.com/es/app/xcode/id497799835?mt=12), disponible directamente en la *Mac App Store*.

* En **Windows**, basta instalar [MinGW](https://es.wikipedia.org/wiki/MinGW), un proyecto para portar a plataformas Windows la familia de compiladores de GNU. Para instarlo, basta [descargarlo de su página web](https://www.mingw-w64.org/downloads/).  Además, deberás asegurarse de que la carpeta donde se haya instalado el programa *gcc* haya sido añadida a la variable de sistema *PATH*. **Es fácil, [puedes ver los detalles (por ejemplo) en este *tutorial*](https://www.youtube.com/watch?v=sXW2VLrQ3Bs)**




#### Atom

Atom es un editor de código fuente disponible con licencia libre para Windows, MacOS, GNU/Linux. Es un editor moderno y con características avanzadas, como el soporte de paquetes (extensiones). Mediante paquetes, Atom soporta prácticamente cualquier lenguaje de programación conocido. Entre ellos, nos resultará muy útil el paquete [`gpp-compiler`](https://atom.io/packages/gpp-compiler).

* Para la **instalación**, es suficiente descargar el programa de su [página
web](https://atom.io/) y proceder de la forma habitual en cada sistema
operativo.
* Una vez instalado el editor, añadimos el paquete [`gpp-compiler`](https://atom.io/packages/gpp-compiler), que permitirá iniciar el proceso de compilación (y ejecución del programa) directamente desde el editor.

* **[Puedes ver los detalles de la instalación en este *tutorial*](https://www.youtube.com/watch?v=9aneqcQD1Gs)** (centrado en Windows, pero generalizable al resto de sistemas operativos).



### Primer programa en C

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
