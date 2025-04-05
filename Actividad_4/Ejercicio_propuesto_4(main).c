// - En tu `main.c`, incluye el `.h`, llama a `restar()` y muestra el resultado.

#include <stdio.h>
#include "restar.h" 

int main() {
    int resultado = restar(10, 3);
    printf("El resultado de la resta es: %d\n", resultado);
    return 0;
}
