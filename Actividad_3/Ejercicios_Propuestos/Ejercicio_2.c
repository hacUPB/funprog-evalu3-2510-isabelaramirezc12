#include <stdio.h>

int main() {
    int opcion, num1, num2, resultado;
    do {
        printf("\nMenú:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        
        if (opcion == 1 || opcion == 2) {
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
        }
        
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %d - %d = %d\n", num1, num2, resultado);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 3);
    
    return 0;
}

// 2. Menú Interactivo con do-while