
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

// Ejercicio 4