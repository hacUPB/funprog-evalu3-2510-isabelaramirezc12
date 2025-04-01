# include <studio.h>
#include <math.h>

void operacion_punteros (float*, double*);

int main (){

    float cubo;
    double coseno;

    operacion_punteros (&cubo, &coseno);

    printf("cubo = %f\n", cubo);
    printf("coseno = %f\n", coseno);

    return 0;
}

void operacion_punteros (float*var1, double*var2){

    float dato;

    printf("ingresa un dato: ");
    scanf("%f",&dato);

    (*var1) =pow (dato , 3);
    (*var2)= cos (dato);
}