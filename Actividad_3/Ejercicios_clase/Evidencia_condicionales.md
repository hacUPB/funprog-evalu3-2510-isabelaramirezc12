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

## Segundo Ejercicio

#include <stdio.h>

int main() {
    int contador = 99;

    while (contador >= -199) { 
        printf("Iteración: %d\n", contador);
        contador = contador - 2; 
    }

    return 0;
}
## Ejercicio 3

#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador * 7;
    }

    return 0;
}

## Ejercicio 3.1

#include <stdio.h>

int main() {
    int contador = 1;

    // multiplicación por 7
    while (contador <= 1000) {
        printf("Iteración (x7): %d\n", contador);
        contador = contador * 7;
    }

    // Reiniciar contador antes de la segunda secuencia
    contador = 1;

    // multiplicación por 9
    while (contador <= 1000) {
        printf("Iteración (x9): %d\n", contador);
        contador = contador * 9;
    }

    return 0;
}

## Cuarto ejercicio

#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        if (contador % 3 == 0) {
            printf("Bizz");
        } else if (contador % 5 == 0) {
            printf("Buzz");
        } else {
            printf("%d", contador);
        }

        printf("\n");
        contador++;  
    }

    return 0;
}

