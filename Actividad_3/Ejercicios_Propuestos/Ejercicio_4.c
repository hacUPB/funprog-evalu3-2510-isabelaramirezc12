#include <stdio.h>

int main() {
    int num, min;
    printf("Ingrese 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        if (i == 0 || num < min) {
            min = num;
        }
    }
    printf("El número mínimo es: %d\n", min);
    return 0;
}

// 4. Búsqueda de Mínimo con for