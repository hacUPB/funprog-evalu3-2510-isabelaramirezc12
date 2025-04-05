// Ejercicio 3

// - Crea una función que reciba dos números y devuelva el **máximo** de ambos.
//- Muestra el resultado en `main()`

#include <stdio.h>

int maximo(int a, int b){}

int main() {
    int num1, num2;
    printf("Ingresa un número: ");
    scanf("%d", &num1);
    printf("Ingresa otro número: ");
    scanf("%d", &num2);


    int mayor = maximo(num1, num2);
    printf("El mayor es: %d\n", mayor);

    return 0;
}
