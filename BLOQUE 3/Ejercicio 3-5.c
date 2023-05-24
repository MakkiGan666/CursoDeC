//Escribe un programa que calcule el factorial de un  numero N entero positivo leido por teclado

#include <stdio.h>

int main(){

    int x, i, fact;
    
    printf("introduce un numero para calcular su factorial.\n");
    scanf("%i", &x);

    fact = 1;

    for(i = 1; i <= x; i++){
        fact = fact * i;
    }

    printf("El resultado de %i es %i.\n", x, fact);

    return 0;
}