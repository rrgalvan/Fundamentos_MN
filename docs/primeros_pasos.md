## Primeros pasos

### Primer programa en C

Es tradicional empezar a aprender un lenguaje de programación con un ejemplo que imprima en pantalla un mensaje de saludo «[hola mundo](https://es.wikipedia.org/wiki/Hola_mundo)».


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


    int main ()
    {
        ...
    }

Las llaves delimitan un bloque, es decir, un grupo de sentencias que se ejecutarán de forma secuencial. La línea previa

    int main ()

indica la definición de una función, en este caso llamada **`main`**. El lenguaje C (y en general en todos los lenguajes de programación estructurada) se fundamenta en la definición de funciones que realizan tareas específicas.
La función `main` es especial, porque es el la que se invoca cuando se ejecuta el programa.


Observemos ahora la última sentencia de la función `main`:

    return 0;


Esta orden finaliza de la función `main` (y, por tanto, **finaliza el programa**) y devuelve un valor numérico, $0$ (que será interpretado por el sistema operativo para saber que el programa ha funcionado bien, sin fallos).



Pues es la definición de una función, en este caso llamada main. En C (y en general en todos los lenguajes de programación estructurada) todo se hace a base de funciones, como main y printf.

La función main es especial, porque es el la que se invoca cuando se ejecuta el programa. Todos los programas en C comienzan su ejecución al principio de la función main, y cuando ésta acaba, el programa también.

Veamos con más detalle la definición de la función:

    int main ()
    {
        ...
    }


 El nombre de la función que viene a continuación, entre llaves, es main.


 La función devuelve como resultado un número entero, int (que es el 0 de la instrucción return).[2]

Finalmente, y un tanto aparte (está separada del resto por una línea en blanco), tenemos la línea

	#include <stdio.h>

Esta línea es una instrucción del preprocesador de C, como nos lo indica el símbolo `#`, y lo que hace es incluir en ese punto el contenido del fichero `stdio.h` que es el que contiene la definición de la función `printf()`, que antes utilizamos (pero que no hemos programado). Esta función  forma parte de la [biblioteca estándar de C](https://es.wikipedia.org/wiki/Biblioteca_est%C3%A1ndar_de_C).
