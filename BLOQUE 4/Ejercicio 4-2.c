//Calcular el factorial de 2 numeros con una funcion

#include <stdio.h>

int factorial(int a);

int main(){

    int x, y, fact1, fact2;

    printf("introduce el primer numero para calcular su factorial: \n");
    scanf("%i", &x);

    printf("introduce el segundo numero para calcular su factorial: \n");
    scanf("%i", &y);

    fact1 = factorial(x);
    fact2 = factorial(y);

    printf("El resultado de el factorial de x es %i\n\n", fact1);
    printf("El resultado de el factorial de y es %i\n\n", fact2);

    return 0;
}

int factorial(int a){
    
    int i, aux;

    aux = 1;

    for( i = 1; i <= a; i++){
        aux *= i;
    }

    return aux;
}

