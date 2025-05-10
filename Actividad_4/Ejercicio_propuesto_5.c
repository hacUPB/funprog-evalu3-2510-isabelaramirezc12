// Ejercicio 5

//- Crea una función `factorial(int n)` que calcule el factorial de `n` usando recursividad.
//- Añade una condición para terminar la recursión cuando `n <= 1`.

#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
    } else {
        int resultado = factorial(numero);
        printf("El factorial de %d es %d\n", numero, resultado);
    }

    return 0;
}
