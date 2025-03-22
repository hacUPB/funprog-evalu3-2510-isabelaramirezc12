## Ejercicios condicionales 

## Primer ejercicio

#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador++;
    }

    return 0;
}

## Segundo ejercicio

#include <stdio.h>

int main() {
    int contador = 99;

    while (contador <= -199 ) {
        printf("Iteración: %d\n", contador);
        contador = contador -2;
    }

    return 0;
}

## Ejercicio 3

#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador * 7;
    }

    return 0;
}

## Ejercicio 3.1

#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador * 7;
    }
    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador * 9;
    }
    return 0;
}