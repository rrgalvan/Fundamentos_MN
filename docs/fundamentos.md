## Fundamentos de programación

El objetivo de esta sección es simplemente
### ¿Qué es un algoritmo?

Sin entrar en una definición más precisa, entenderemos por [algoritmo](https://es.wikipedia.org/wiki/Algoritmo) a un conjunto de pasos, instrucciones o acciones lógicas que se deben seguir para resolver un problema, de forma que:

- Cada uno de estos pasos está definido sin ambigüedad
- El algoritmo termina un tiempo finito después de ejecutar todos los pasos.


###### **Características**:

- Un algoritmo tene que ser preciso.
- Tiene que estar bien definido.
- Tiene que ser finito.
- Es es independiente del lenguaje de ordenador o la máquina donde se implemente.

Un [programa](https://es.wikipedia.org/wiki/Programa_inform%C3%A1tico) es una secuencia de instrucciones escritas en un lenguaje determinado para realizar o implementar uno o más algoritmos en el ordenador.

### Lenguajes de ordenador

- El **[lenguaje de máquina](w:Lenguaje_de_máquina)** es el único lenguaje que la computadora "entiende" y es capaz de ejecutar.

<!-- end list -->

  - Los **[lenguajes de
    programación](w:Lenguaje_de_programación)** son el
    medio de comunicación entre el programador y una computadora. El
    programador escribe en algún lenguaje de programación y utiliza las
    herramientas provistas por ese lenguaje para transformarlo en
    lenguaje de máquina.

<!-- end list -->


### Tipos de lenguajes

Existe una gran cantidad de lenguajes de programación, que están
pensados para distintas finalidades, siguen distintos
[paradigmas](:w:Paradigma_de_programación), y de una u otra
forma se diferencian de los demás.

#### Esquemas de programación

El esquema de programación llamado **[Programación
Imperativa](:w:Programación_imperativa)**, consiste en
escribir una secuencia de instrucciones una detrás de la otra, que se
ejecutarán en orden. Algunas de esas instrucciones pueden hacer que la
máquina pase a una instrucción que no sea la siguiente, tal vez porque
se cumpla una condición que hayamos establecido.

En los últimos años ha tomado fuerza otro paradigma de computación,
llamado **[Programación Orientada a
Objetos](:w:Programación_orientada_a_objetos)** , en el cual
se intentan modelar los sistemas creados como extensiones de la realidad
mediante la definición de "objetos" que modelan entidades de la vida
real y que interactúan entre sí mediante "mensajes" llamadas métodos.

El lenguaje C es un lenguaje imperativo, no orientado a objetos.

#### Alto o bajo nivel

Por otro lado, los lenguajes de programación se clasifican en niveles.
Un lenguaje es de más **[bajo
nivel](w:Lenguaje_de_bajo_nivel)** cuanto más cercano esté al
código de máquina, y un lenguaje que es de más **[alto
nivel](w:Lenguaje_de_alto_nivel)** cuanto más lejano esté de
la máquina y más cercano al lenguaje humano.

C es un lenguaje de alto nivel aunque tiene muchas características de
lenguaje de bajo nivel (como el uso que permite hacer de la memoria).
Estas características hacen que C sea un lenguaje muy potente, ya que
permite optimizar al máximo los recursos de la máquina. Por ende, esto
también hace que la dificultad y que los errores que se puedan cometer
programando aumenten. Así que a C se le considera de nivel medio.

Lenguajes de más alto nivel que C son aquellos en los que el programador
no necesita encargarse de manipular la memoria, como
**[Java](w:Lenguaje_de_programación_Java)**,
**[C\#](w:C_Sharp)**, **[Python](w:Python)**,
**[Ruby](w:Ruby)**, entre otros.

#### Compilados o interpretados

Otra forma de clasificar a los lenguajes de programación que es según la
forma en que se ejecutan sus órdenes. Existen los lenguajes que son
**[interpretados](w:Lenguaje_interpretado)**, cuyas órdenes
pasan a través de un intérprete que se encarga de ejecutarlas (a partir
del código fuente) en el mismo momento en que están siendo leídas.
Algunos de los lenguajes interpretados son
**[Python](w:Python)**, **[Perl](w:Perl)** o
**[Tcl](w:Tcl)**, entre muchos otros.

La contraparte de los lenguajes interpretados son los lenguajes
**[compilados](w:Lenguaje_compilado)** (como el mismo C) que
se diferencian en que las órdenes son transformadas a lenguaje de
máquina que se almacena en un archivo ejecutable. Ese archivo puede
ejecutarse luego, sin recurrir al compilador.

Los lenguajes compilados tienen la ventaja de la velocidad y la
eficiencia, pero los interpretados tienen la ventaja de que,
generalmente, son muy portables y de más alto nivel.

### Estructura de la memoria de un ordenador

Parte de esta potencia de C viene de que permite acceder con mucha
libertad a la memoria de la máquina. Para entender un poco cómo es
posible, debemos entender cómo se guardan los datos en la memoria.

Imaginemos que la memoria tiene un montón de casillas, una enorme fila
de casillas, cada una de las cuales contiene un [dígito binario
(bit)](w:Bit):

0101001010100001010101001010000100111010110010010101001011010110001101010110101010110111...

Es exactamente así, pero es más cómodo recordar que esos bits se
encuentran agrupados de ocho en ocho, formando [octetos
(bytes)](w:Byte):

<table>
<tbody>
<tr class="odd">
<td><p>01010010</p></td>
<td><p>10100001</p></td>
<td><p>01010100</p></td>
<td><p>10100001</p></td>
<td><p>00111010</p></td>
<td><p>11001001</p></td>
<td><p>01010010</p></td>
<td><p>11010110</p></td>
<td><p>00110101</p></td>
<td><p>01101010</p></td>
<td><p>10110111</p></td>
<td><p>...</p></td>
</tr>
</tbody>
</table>

Cada octeto puede contener \(2^8=256\) combinaciones distintas de ceros
y unos, es decir, cualquier número entre 0 y 255:

<table>
<tbody>
<tr class="odd">
<td><p>82</p></td>
<td><p>161</p></td>
<td><p>84</p></td>
<td><p>161</p></td>
<td><p>58</p></td>
<td><p>201</p></td>
<td><p>82</p></td>
<td><p>214</p></td>
<td><p>181</p></td>
<td><p>106</p></td>
<td><p>183</p></td>
<td><p>...</p></td>
</tr>
</tbody>
</table>

También podemos representar estos números en base hexadecimal:

<table>
<tbody>
<tr class="odd">
<td><p>0x52</p></td>
<td><p>0xA1</p></td>
<td><p>0x54</p></td>
<td><p>0xA1</p></td>
<td><p>0x3A</p></td>
<td><p>0xC9</p></td>
<td><p>0x52</p></td>
<td><p>0xD6</p></td>
<td><p>0x35</p></td>
<td><p>0x6A</p></td>
<td><p>0xB7</p></td>
<td><p>...</p></td>
</tr>
</tbody>
</table>

O considerarlos caracteres, mediante alguna
[codificación](w:Codificación_de_caracteres):

<table>
<tbody>
<tr class="odd">
<td><p>R</p></td>
<td><p>¡</p></td>
<td><p>T</p></td>
<td><p>¡</p></td>
<td><p>:</p></td>
<td><p>É</p></td>
<td><p>R</p></td>
<td><p>Ö</p></td>
<td><p>5</p></td>
<td><p>j</p></td>
<td><p>·</p></td>
<td><p>...</p></td>
</tr>
</tbody>
</table>

Este es el tipo de dato más elemental que nos podemos encontrar en C: el
caracter. Un caracter ocupa exactamente un byte (8 bits) de memoria, y
puede contener un número entre 0 y 255, o entre -128 y 127, dependiendo
si queremos considerarlo como sin signo o con él.
