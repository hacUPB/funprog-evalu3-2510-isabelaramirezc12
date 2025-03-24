#include <stdio.h>

int main(){
    
    int opcion;
    
    printf("Seleccione la opción del menú que desea conocer: \n");
    printf("1: Encender LED \n2: Apagar LED \n3: Mostrar estado del LED \n4: Salir \n");
    scanf ("%d" , &opcion);

    switch (opcion){
 
        case 1: 
        printf("Encender LED \n");
        break;

        case 2: 
        printf("Apagar LED \n");
        break;

        case 3: 
        printf("Mostrar estado LED \n");
        break;

        case 4: 
        printf("Salir \n");
        break;

        default:
        printf("Opción inválida.\n");
        break;

    }
    return 0;
}