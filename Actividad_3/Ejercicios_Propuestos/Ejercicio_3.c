#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

// 3. Tablas de Multiplicar con for