//Intercambia los valores de dos variables con una funcion 

#include <stdio.h>

void cambio(int *a, int *b);

int main (){

    int x, y;

    x= 5;
    y= 10;

    cambio( &x , &y );
    
    printf("El valor actual de x es %i y el valor actual y es %i.\n", x, y);

    return 0;
}

void cambio(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}