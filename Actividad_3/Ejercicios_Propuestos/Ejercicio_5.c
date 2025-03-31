#include <stdio.h>

int main() {
    int num, suma = 0, contador = 0;
    float media;
    printf("Ingrese números para calcular la media (0 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        suma += num;
        contador++;
    }
    if (contador > 0) {
        media = (float)suma / contador;
        printf("La media es: %.2f\n", media);
    } else {
        printf("No se ingresaron números válidos.\n");
    }
    return 0;
}

// 5. Calcular la media con while