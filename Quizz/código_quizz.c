include <stdio.h>

int main(){
    
    int stock, productos; // eliminé una variable y la simplifiqué más 
    
     stock = 50; // Definí stock
     
     productos = 0;
     
    if (productos <= stock) // agregué if 
    {
        do{
        printf("Cuántos productos desea comprar: \n");
        scanf( "%d", &productos); //Arreglé el error de sintaxis
        
        ("%d" , &stock); // agregué un lugar para guardar las variables del stock

        stock = stock - productos; // mejoré errores de sintaxis
        
        printf("Su compra fue realizada, el stock restante es: %d \n", stock );
     
        }while(stock > 0 || productos == 0); // continue el código
    
    }
    
    else{
      printf("No hay suficientes productos disponibles en el stock, \n");  
    }

    return 0;
    
}

// Profe hay un pequeño error y es que salen números negativos en el stock en ves de aparecer "No hay suficientes productos disponibles en el stock" 
// porfavor pido comprensión pues no domino tanto el tema de bucles. plissss <3.

// realmente debí usar solo while y luego usar break para que no me aparezcan números negativos.