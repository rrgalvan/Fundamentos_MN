# Fundamentos de Métodos Numéricos

Este curso pretende ofrecer de forma simple y clara un repaso a algunos de los **fundamentos requeridos para cursar asignaturas de métodos numéricos**. Se presentan numerosos ejemplos, siempre ilustrando conceptos relacionados con esta temática y acompañados con los conocimientos matemáticos mínimos para comprenderlos. Se acompaña de una **introducción rápida a la programación con el lenguaje C**. El objetivo es no es presentar una referencia exhaustiva este lenguaje, sino ofrecer la información imprescindible para programar los ejemplos y sentar su base para el uso en el futuro de este u otros lenguajes de programación en métodos numéricos.


## ¿A quién se dirige este documento?

Este documento ha sido realizado pensando en estudiantes de Métodos Numéricos en el Grado en Matemáticas de la Universidad de Cádiz, pero está dirigido a toda persona interesada en la temática. Para profundizar en los métodos numéricos y en la programación en lenguaje C, se recomienda consultar bibliografía como:


    Kincaid, D., Cheney, W., Análisis Numérico. Las matemáticas del cálculo científico.
    Addison-Wesley-Iberoamericana 1994

    H. Schildt, C. Guía de autoenseñanza
    Osborne/McGraw-Hill, 2002

## ¿Cómo puedo utilizar este material?

Puedes...

- [acceder al curso a través de internet](https://rrgalvan.github.io/curso-c-numerico) o bien

- [descargarlo de este repositorio *git*](https://github.com/rrgalvan/curso-c-numerico). En este caso podrás visualizar localmente los ficheros de tipo *[Markdown](https://es.wikipedia.org/wiki/Markdown)* situados en el directorio `docs`, utilizando [MkDocs](https://www.mkdocs.org) o cualquier visor de *Markdown*. Deberás instalar [pymdown-extensions](https://www.google.com/search?channel=fs&q=pip+install+pymdown-extensions) (extensiones *Markdwon* para *Python*) para visualizar expresiones matemáticas.

El material aquí recogido tiene licencia libre, [aquí puedes leer más la licencia y los autores](about.md).

## ¿Qué son los Métodos Numéricos?

De forma muy genérica, podríamos definir a los *Métodos Numéricos* como la rama de las *Matemáticas* que analiza y construye algoritmos para resolver problemas ***de forma aproximada***. Estos algoritmos suelen requerir grandes cálculos y son implementados como programas de ordenador y, de hecho, la eclosión de la informática ha producido un enorme avance en esta rama de las matemáticas.

Es importante enfatizar que ***de forma aproximada no significa poco precisa*** o con *poco rigor*. De hecho, en métodos numéricos es fundamental establecer resultados que garanticen el buen planteamiento de los *problemas aproximados* y la *convergencia* de las soluciones aproximadas hacia la «*solucion exacta*» del problema considerado. De forma que sea posible el cálculo de soluciones aproximadas  «***tan cercanas a la solución exacta como desemos***», siempre que dispongamos de suficiente *potencia de cálculo* para ello.


## ¿Qué es el lenguaje C?

El [lenguaje de programación C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)) fue creado por Dennis Ritchie entre 1969 y 1973 cuando trabajaba en Bell Laboratories de AT&T junto con Ken Thompson en el diseño del sistema operativo UNIX. C fue creado para poder escribir dicho sistema operativo en un lenguaje de alto nivel, independiente del hardware donde se ejecutara.

Contar con un lenguaje de alto nivel permitió el avance de los sistemas operativos, ya que el mismo código podía ser utilizado en las distintas plataformas, propiciando la reutilización de código y reduciendo los tiempos de desarrollo. Así es que los sistemas operativos basados en UNIX, el sistema BSD, el sistema GNU/Linux y muchos otros fueron desarrollados en C.

Con el paso del tiempo, C se ha convertido en el lenguaje más trascendente de la historia de la informática. Se han desarrollado cientos de bibliotecas que permiten a los programadores de C utilizar el código desarrollado por otros para la realización de tareas comunes. Esto, a su vez, ha propiciado el desarrollo de infinidad de aplicaciones y herramientas en lenguaje C.

De forma resumida (más sobre ello a continuación):

- C es un lenguaje de [alto nivel](https://es.wikipedia.org/wiki/Lenguaje_de_alto_nivel)) (cercano al lenguaje humano) aunque posee características de [bajo nivel](https://es.wikipedia.org/wiki/Lenguaje_de_bajo_nivel) (cercanas al [código de máquina](https://es.wikipedia.org/wiki/Lenguaje_de_m%C3%A1quina)).
- Es un [lenguaje compilado](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n_compilado), es decir requiere de un [compilador](https://es.wikipedia.org/wiki/Compilador) para generar un fichero con código ejecutable por la máquina.
- Estas características hacen que el código resultante de la programación en lenguaje C sea mucho *más rápido que otros lenguajes* de mayor nivel como [Python](https://www.python.org/) o [Matlab](https://www.mathworks.com/products/matlab.html)/[Octave](https://www.gnu.org/software/octave/index): lenguajes usados con frecuencia en cálculo numérico, pero que son de tipo [interpretado](https://es.wikipedia.org/wiki/Int%C3%A9rprete_(inform%C3%A1tica)), no compilado.
- Por contra, el tiempo requerido para programar algoritmos en lenguaje C es usualmente mayor que en lenguajes de alto nivel como Python, Matlab/Octave o [Mathematica](https://es.wikipedia.org/wiki/Mathematica).
