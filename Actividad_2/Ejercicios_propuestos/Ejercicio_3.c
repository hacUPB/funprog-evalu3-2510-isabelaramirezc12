int main(){
    
    int postre;
    
    do { 
    printf("Seleccione que postre desea comer: \n");
    printf("1.helado \n2.cheesecake \n3.cupcake \n4.pastel de melocotón \n5.salir \n");
    scanf("%d" , &postre);
    }
    
    while (postre != 5);
        return 0;
    }