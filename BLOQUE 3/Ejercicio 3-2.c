//Realiza un programa que calcule la media de x numeros introducidos por teclado 

#include <stdio.h>

int main(){

    int x, y, i;
    float suma;

    printf("Introduce la cantidad de numeros que quieres calcular la media: ");
    scanf("%i",&x);

    i = 0;
    suma = 0;

    while(i < x){
         printf("introduce el %i numero: ",i+1);
         scanf("%i", &y);
         suma += y;
         i++;
    }
    
    suma = suma / x;

    printf("El resultado de la media es; %f.\n", suma);

    return 0;
}