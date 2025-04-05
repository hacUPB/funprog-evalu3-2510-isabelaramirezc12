#include <stdio.h>

int main(){
    
float calificacion;
    
printf("Ingrese su calificación: \n");
scanf ("%f" , &calificacion);

if ( calificacion > 5 || calificacion < 0){
printf("Error, ingrese nuevamente su calificación.\n");

}else if ( calificacion < 3 ){
printf("Su nota es insuficiente \n");

}else if ( 3 <= calificacion && calificacion <= 4.5){
printf("Su nota es aceptable \n");

} else{
printf("Su nota es sobresaliente \n");
}

    return 0;
}