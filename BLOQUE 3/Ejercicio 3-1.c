//Realiza un programa que imprima la suma de los numeros pares entre dos y mil

#include <stdio.h>

int main(){

    int i;
    float suma;

    suma = 0;

    for(i = 2; i <= 2000; i +=2){
        suma += i;  
    }

    printf("El resultado de la suma es: %f0.\n",suma);
    
    return 0;
}