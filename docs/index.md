# Curso de Lenguaje C Numérico

Curso de introducción al lenguaje C orientado a los métodos y la simulación numérica.

Este curso pretende ofrecer de forma simple y clara una **introducción rápida a la programación con el lenguaje C**. El objetivo es no es presentar una referencia exhaustiva este lenguaje, sino ofrecer la información imprescindible para una persona que se inicia en ester lenguaje *para su uso en matemáticas* y, concretamente, para la implementación de **algoritmos relacionados con el cálculo y los *métodos numéricos***. Se presentan numerosos ejemplos siempre ilustrando conceptos relacionados con esta temática, acompañados con los conocimientos matemáticos mínimos para comprenderlos.


## ¿Para quién es este libro?

Este libro está realizado pensando en estudiantes del Grado en Matemáticas de la Universidad de Cádiz pero dirigido a toda persona que desee obtener unos conocimientos básicos en programación en lenguaje C para algoritmos/asignaturas relacionados con las matemáticas, en especial con los métodos numéricos y la simulación numéricas para desarrolladores de software numérico. Por supuesto, se recomienda las personas interesadas el profundizar en el futuro en estos temas, realizando cursos o consultando bibliografía. Algunos clásicos:


    H. Schildt, C. Guía de autoenseñanza
    Osborne/McGraw-Hill, 2002

    Kincaid, D., Cheney, W., Análisis Numérico. Las matemáticas del cálculo científico.
    Addison-Wesley-Iberoamericana 1994

## ¿Cómo puedo utilizar este material?

Puedes...

- [acceder al curso a través de internet](https://rrgalvan.github.io/curso-c-numerico) o bien

- [descargarlo de este repositorio *git*](https://github.com/rrgalvan/curso-c-numerico).

En el último caso (si te interesa acceder al contenido del repositorio) podrás visualizar los ficheros de tipo *[Markdown](https://es.wikipedia.org/wiki/Markdown)* situados en el directorio `docs` utilizando [MkDocs](https://www.mkdocs.org) o cualquier visor de *Markdown*.


## ¿Qué es el lenguaje C?

El [lenguaje de programación C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)) fue creado por Dennis Ritchie entre 1969 y 1973 cuando trabajaba en Bell Laboratories de AT&T junto con Ken Thompson en el diseño del sistema operativo UNIX. C fue creado para poder escribir dicho sistema operativo en un lenguaje de alto nivel, independiente del hardware donde se ejecutara.

Contar con un lenguaje de alto nivel permitió el avance de los sistemas operativos, ya que el mismo código podía ser utilizado en las distintas plataformas, propiciando la reutilización de código y reduciendo los tiempos de desarrollo. Así es que los sistemas operativos basados en UNIX, el sistema BSD, el sistema GNU/Linux y muchos otros fueron desarrollados en C.

Con el paso del tiempo, C se ha convertido en el lenguaje más trascendente de la historia de la informática. Se han desarrollado cientos de bibliotecas que permiten a los programadores de C utilizar el código desarrollado por otros para la realización de tareas comunes. Esto, a su vez, ha propiciado el desarrollo de infinidad de aplicaciones y herramientas en lenguaje C.

## Características del lenguaje C

- C es un lenguaje de medio o relativamente [bajo nivel](https://es.wikipedia.org/wiki/Lenguaje_de_bajo_nivel), es decir, el código C es relativamente cercano al lenguaje máquina (respecto al lenguaje humano o a lenguajes de [alto nivel](https://es.wikipedia.org/wiki/Lenguaje_de_alto_nivel)).
- Es un [lenguaje compilado](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n_compilado), es decir requiere de un [compilador](https://es.wikipedia.org/wiki/Compilador) (traductor que genera [código de máquina](https://es.wikipedia.org/wiki/Lenguaje_de_m%C3%A1quina) a partir del [código fuente](https://es.wikipedia.org/wiki/C%C3%B3digo_fuente)). El programa ya compilado puede ejecutarse directamente en la máquina.
- Estas características hacen que el código resultante de la programación en lenguaje C sea mucho *más rápido que otros lenguajes* de mayor nivel como [Python](https://www.python.org/) o [Matlab](https://www.mathworks.com/products/matlab.html)/[Octave](https://www.gnu.org/software/octave/index): lenguajes usados con frecuencia en cálculo numérico, pero que son de tipo [interpretado](https://es.wikipedia.org/wiki/Int%C3%A9rprete_(inform%C3%A1tica)), no compilado.
- Por contra, el tiempo requerido para programar algoritmos en lenguaje C es usualmente mayor que en lenguajes de alto nivel como Python o Matlab/Octave.


## Acerca de

Se otorga permiso para copiar y reutilizar este material bajo los términos de las licencias libre [GFDL](https://es.wikipedia.org/wiki/Licencia_de_documentaci%C3%B3n_libre_de_GNU) o [Creative Commons Compartir-Igual 3.0](https://creativecommons.org/licenses/by-sa/3.0/deed.es). Véase el fichero [about.md](about.md)
