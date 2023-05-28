//Bloque 2-3: Estructuras y switch

//Realice un programa en c que lea un numero entre 1 y 4 y devuelva el dia de la semana correspondiente.

#include <stdio.h>

int main () {

    int x;
    printf("Introduce un numero del 1 al 4: ");
    scanf("%i", &x);

    if (x == 1){
        printf("Lunes.\n");
    } 
    else if (x == 2){
        printf("Martes.\n");
    }
     else if (x == 3){
        printf("Miercoles.\n");
    }
     else if (x == 4){
        printf("Jueves.\n");
    }
    else{
        printf("Dale, mete el numero que se te cante el ojete nomas");
    }

    
    return 0;
}

#include <stdio.h>

int main () {

    int x;
    printf("Introduce un numero del 1 al 4: ");
    scanf("%i", &x);

    switch (x){
        case 1: printf("Lunes.\n"); break;
        case 2: printf("Martes.\n"); break;
        case 3: printf("Miercoles.\n"); break;
        case 4: printf("Jueves.\n"); break;
        default: printf("Sos tonto vos?.\n");
    }
    
    return 0;
}