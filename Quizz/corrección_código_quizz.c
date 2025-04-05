#include <stdio.h>

// Profe muchas gracias por haberme dado la oportunidad de corregirlo <3

int main(){
    
    int stock, productos; 
    
     stock = 50; 
     
     productos = 0;
     
        do{
            
        printf("Cuántos productos desea comprar: \n");
        scanf( "%d", &productos); 
        
        if (productos < 0 ){
            printf("Ingrese nuevamente el valor de productos que desea comprar \n");
            
        }else{
        
        stock = stock - productos; 
        
        printf("Su compra fue realizada, el stock restante es: %d \n", stock );
        }
        
        }while(stock > 0); 
        
        printf("No puede realizar más compras, no hay suficientes productos disponibles en el stock \n"); 
        
           return 0;
    
    }

// CORRECCIONES JUSTIFICACIÓN

    // - Se eliminó "("%d" , &stock)" pues no era un comando necesario que no tenía necesidad de ser creado pues stock ya había sido definido con una variable fija al comienzo.

    // - Se modificó "while(stock > 0 || productos == 0)" pues la manera en la que se estaba usando la condición era redundante, por lo que se optó en usar simplemente "while(stock > 0)".

    // - Se movió de lugar el "if" para que pudiera tener algún impacto en la ejecución del código.

    // - Se cambió la condición con la cuál se ejecutaba el "if" (Explicación abajo).
    // La manera en la que se usaba en el código anterior buscaba que implementara un condición para que cuando stock llegara a 0 dejara de ejecutarse el código (no era la manera correcta de lograrlo).
    // Se le dió una nueva función al "if" para que evitara que se ejecutara el código de manera errónea si se ingresaban números negativos.
    // Adicionalmente se eliminó el "else" pues ya no era necesario.

    // - Para lograr que el código parara cuando el stock llegara a 0 simplemente se añadió "printf("No puede realizar más compras, no hay suficientes productos disponibles en el stock \n")"
    // debajo de "while(stock > 0)" (Ese printf indica que cuando la condición no se repite más hay que mostrar un mensaje de que ya no hay más stock y que el código termina ahí).

