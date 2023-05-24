//calcular el numero mayor entre dos numeros con una funcion 


#include <stdio.h>

int maximo(int a, int b);

int main(){

    int x, y, max;

    printf("Ingresa un numero maquinaria del mal\n"); 
    scanf("%i", &x);

    printf("bien ahi capo, ahora mete un nummerito ma\n");
    scanf("%i", &y);

    max = maximo(x, y);

    printf("El numero mayor es %i", max);
    
    return 0;

}

int maximo(int a, int b){

    int Ma;

    if( a > b){
        Ma = a;
    } else{
        Ma = b;
    }

    return Ma;
}
