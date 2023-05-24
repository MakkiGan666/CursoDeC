//Bloque 6-1: Estructuras 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int paginas;
    char nombre[50];
    float precio;
} libro;

int main(){

    int i;
    libro JT[10];

    for ( i = 0; i < 10; i++){
        JT[i].precio = 25 + i;
        printf("El producto de la estrcutura %i es de %f\n", i+1, JT[i].precio);
    }
    

    system("pause");
    return  0;
}