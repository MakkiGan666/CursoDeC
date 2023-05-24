//Bloque 3-1:Estructuras Iterativas 

//Escribe un numero que lea dos numeros y muestre por pantalla todos los numeros comprendidos por esos numeros dados

#include <stdio.h>

int main(){
    
    int x, y, i;

    printf("Introducir un numero: ");
    scanf("%i", &x);

    printf("Introducir un numero mayor que el anterior: ");
    scanf("%i", &y);
    
    //Blucle FOR: 
    
    for(i = x + 1; i < y; i++){
        printf("%i, ",i);
    }

    printf("\n");

    //Bucle WHILE:

    i = x+1;
    while(i<y){
        printf("%i, ",i);
        i++;
    }    
    
    return 0;
}