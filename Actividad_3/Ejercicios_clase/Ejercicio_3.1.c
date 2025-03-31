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

//Ejercicio 3.1