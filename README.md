# Tarea 1. Programación de una solución paralela
## Raul Ayala
## Cloud Computing


### Descripción Breve
Seleccionar modelos de paralelización apropiados a un programa aplicándolos en la creación de una versión paralela correcta que explote el ambiente de cómputo paralelo de última generación.

INTRODUCCIÓN
La programación paralela permite ejecutar varios procesos al mismo tiempo, optimizando el rendimiento y los tiempos de ejecución de aplicaciones complejas. Este documento detalla el desarrollo de un proyecto de programación paralela, incluyendo la explicación del código, los resultados obtenidos y una reflexión sobre los beneficios e importancia de este enfoque.

INSTRUCCCIONES
La utilización de arreglos en la programación es muy común, por ejemplo piense en una suma de dos arreglos como la mostrada en la siguiente imagen, donde tenemos dos arreglos llamados A y B de 10 elementos cada uno y deseamos crear un tercer arreglo con la sumatoria de cada uno de los elementos en los mismos subíndices.
Esto es bastante sencillo en la programación pero el tiempo que tomará en calcularse el resultado depende directamente de la cantidad de elementos que tienen los arreglos y la velocidad del procesador en la que se ejecutan las operaciones. Las sumas individuales de los elementos se realizan una por una en orden según los subíndices, entonces ¿Qué pasaría si los arreglos tienen millones de elementos? 

La respuesta es que la suma de los arreglos tardaría bastante en resolverse. Entonces aquí podríamos aplicar la programación paralela para que la suma de algunos elementos de los arreglos se realicen en un thread, otra parte las controle otro thread y así sucesivamente, esto aprovechando que las sumas son independientes entre ellas.

Por tener Mac he tenido que hacer un poco más de trabajo para poder compilar el programa y correr la librería de OpenMP. Tuve que buscar un compilador que fuera compatible con el sistema operativo y en este caso con mi procesador que en este caso es Intel. 
La solución fue utilizar el compilador Clang, que instalé con Homebrew. 

Agrego más detalle en el documento en Word. 




