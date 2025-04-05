#include <stdio.h>
#include <math.h>

void variables (float, float, float, float*);

int main () {
    float N1,  N2,  N3, promedio;

    

printf("ingresa un número: \n");
scanf( "%f" , &N1);

printf("ingresa otro número: \n");
scanf( "%f" , &N2);

printf("ingresa un último número: \n");
scanf( "%f" , &N3);


    printf("numero 1=%f\n", N1);
    printf("numero 2=%f\n", N2);
    printf("numero 3=%f\n", N3);
    
    variables (N1, N2, N3, &promedio);
    
    printf("El promedio de los números es %f\n", promedio);

    return 0;
    
}

void variables (float v1, float v2, float v3, float * promedio)
{


(*promedio) = (v1 + v2 + v3) / 3.00 ;

}