// - Utiliza la función `sqrt()` de la biblioteca `<math.h>` para calcular la raíz cuadrada de un número ingresado por el usuario.
// - Verifica que el número sea positivo; si es negativo, muestra un mensaje de error.


#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    printf("Ingresa un número: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        double raiz = sqrt(numero);
        printf("La raíz cuadrada de %.2f es %.2f\n", numero, raiz);
    } else {
        printf("Error: no se puede calcular la raíz cuadrada de un número negativo.\n");
    }

    return 0;
}
