//Comparar dos cadenas de caracteres

#include <stdio.h>
#include <string.h>

int main(){

    char c1[5];
    char c2[5];

    printf("introduce la primer frase: ");
    fgets(c1, 5, stdin);

    printf("introduce la segunda frase: ");
    fflush(stdin);
    fgets(c2, 5, stdin);
    
    if( c1 == c2){
        printf("Los dos string son iguales.\n");
    } else {
        printf("Las dos cadenas de caracteres no son iguales -_-"); 
    }

    return 0;
}