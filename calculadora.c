#include <stdio.h>

int main(void) {
    float valor1, valor2, resultado;
    int opciones;

    printf("Elija la opción de operación básica que desea realizar: \n");
    printf("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n");
    scanf("%d", &opciones);

    printf("Ingrese el primer número que desea operar: \n");
    scanf("%f", &valor1);
    printf("Ingrese el segundo número que desea operar: \n");
    scanf("%f", &valor2);

    switch (opciones) {
        case 1:
            resultado = valor1 + valor2;
            printf("Eligió suma: %f + %f = %f\n", valor1, valor2, resultado);
            break;

        case 2:
            resultado = valor1 - valor2;
            printf("Eligió resta: %f - %f = %f\n", valor1, valor2, resultado);
            break;

        case 3:
            resultado = valor1 * valor2;
            printf("Eligió multiplicación: %f * %f = %f\n", valor1, valor2, resultado);
            break;

        case 4:
            if (valor2 == 0) {
                printf("Error: No se puede dividir entre 0\n");
            } else {
                resultado = valor1 / valor2;
                printf("Eligió división: %f / %f = %f\n", valor1, valor2, resultado);
            }
            break;
    }

    return 0;
}