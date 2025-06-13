# TAREA_4 - BREYSON BARRIOS SALAZAR - C31049

## Descripcion

Este proyecto consiste en la implementación en lenguaje C de dos estructuras de datos fundamentales: una pila (stack) y una lista enlazada simple (linked list). La pila se implementa con una capacidad fija de 100 elementos y opera bajo el principio LIFO (Last In, First Out). Por su parte, la lista enlazada permite el manejo dinámico de memoria y soporta operaciones como inserción al inicio o al final, búsqueda, eliminación de elementos y visualización del contenido. Todas las funciones de ambas estructuras se prueban mediante casos de uso predefinidos en el archivo main.c, lo que permite verificar su correcto comportamiento.

## Funcionamiento

El programa se ejecuta a través de la función main, la cual contiene dos secciones principales de pruebas: una para la pila y otra para la lista enlazada. En el caso de la pila, se inicializa la estructura, se agregan 100 elementos consecutivos, se comprueba si la pila está llena, se intenta agregar un elemento adicional (el cual debe fallar), se extraen 5 elementos verificando que salgan en orden inverso, y finalmente se vacía completamente la pila para probar el manejo de condiciones de subdesbordamiento.

En la parte de la lista enlazada, se inicializa la estructura y se insertan tres elementos (10, 20 y 30) al final. Luego se agrega el valor 5 al inicio de la lista. Se imprime la lista, que debe mostrar los valores en el orden 5, 10, 20, 30. Posteriormente se consulta si ciertos valores están presentes (como 20 y 99), se elimina el elemento 20 (lo que debe tener éxito), se intenta eliminar el valor 99 (lo que debe fallar) y finalmente se imprime nuevamente la lista y su tamaño. De esta forma, se cubren los principales casos de uso esperados en una implementación de lista enlazada.

## Compilacion y Ejecucion

El proyecto está conformado por cinco archivos: main.c, que contiene las pruebas de funcionamiento; stack.c y stack.h, que implementan y declaran las funciones de la pila; y linked_list.c junto con linked_list.h, que hacen lo propio con la lista enlazada.

El proceso de compilación consiste en unir estos tres archivos fuente (main.c, stack.c y linked_list.c) en un único ejecutable. Para ello, desde la terminal y ubicándose en la carpeta donde se encuentran los archivos, se debe escribir el siguiente comando:

gcc main.c stack.c linked_list.c -o prueba

Este comando generará un archivo ejecutable llamado prueba. Una vez compilado correctamente, el programa puede ejecutarse escribiendo en la terminal:

./prueba

Al ejecutarlo, el programa imprimirá en pantalla una serie de mensajes que describen paso a paso las operaciones realizadas sobre la pila y la lista enlazada. Estos mensajes incluyen tanto los resultados obtenidos como los valores esperados, lo que permite comprobar fácilmente si las funciones implementadas cumplen con el comportamiento previsto.
