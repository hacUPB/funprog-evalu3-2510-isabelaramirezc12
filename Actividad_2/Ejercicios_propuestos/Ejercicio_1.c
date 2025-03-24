// Ejercicio 1
#include <stdio.h>

int main(){
    
int edad;
    
printf("ingrese su edad: \n");
scanf ("%d" , &edad);

if (edad < 0){
printf("Error, ingrese nuevamente su edad.\n");

}else if (edad < 18){
printf("Eres menor de edad \n");

} else{
printf("Eres mayor de edad \n");
}

    return 0;
}


