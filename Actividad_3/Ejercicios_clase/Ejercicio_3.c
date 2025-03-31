#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador * 7;
    }

    return 0;
}
