
## Solución preguntas

1. ¿Cuál es la función principal del **preprocesador** en C?

-Respuesta:

2. ¿Por qué se dice que el **código objeto** (.o) no es directamente ejecutable?

-Respuesta:
El código objeto (.o) no es directamente ejecutable porque aún está incompleto.

Cuando se compila en C, este lo que hace es traducir cada archivo fuente (.c) a su equivalente en lenguaje de máquina, generando así archivos .o. Sin embargo, estos archivos pueden contener referencias a funciones o variables que están en otros archivos o bibliotecas, pero que aún no han sido conectadas por lo que sin esto no podría estar completo para ser un ejecutable.

3. ¿Qué diferencia existe entre el **código ensamblador** (.s) y el **código objeto** (.o)?

-Respuesta:

- Código ensamblador (s): Es un código en lenguaje ensamblador generado a partir del código C. Es más legible para personas y se encuentra en una etapa intermedia antes de la conversión a lenguaje de máquina.

- Código objeto (o): Es el resultado de ensamblar el código ensamblador. Contiene instrucciones en lenguaje de máquina listas para ser enlazadas, pero aún no es ejecutable.


4. ¿Para qué sirve la opción `S` en GCC?

-Respuesta:
La opción -s en GCC es la que ayuda a generar el código ensamblador (.s) a partir del código fuente en C, sin ensamblarlo ni enlazarlo.


5. ¿Qué sucede si omitimos la etapa de **linker**?

-Respuesta:
Si omitimos el linker, el código objeto (.o) no podrá convertirse en un programa ejecutable, porque para generar un ejecutable, el linker debe unir todos los archivos objeto y resuelver referencias externas.


