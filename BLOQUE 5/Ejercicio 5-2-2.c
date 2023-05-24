//Ordenar un vector de 10 enteros de menor a mayor mediante una funcion 

#include <stdio.h>

void Ordenar (int b[]);
void Imprimir (int x[]);

int main(){

    int v[10] = {9,7,6,4,8,5,1,2,3};

    Ordenar(v);
    Imprimir(v);
    return 0;
}

void Ordenar(int a[]){
    int i, j, aux;

    for(i = 0; i < 10; i++){
        for(j = i; j < 10; j++){
            if (a[i] < a[j]){
                aux = a[i];
                a[i] = a[j];
                a[i] = aux;
            }
        }
    }
}

void Imprimir (int x[]){
    int i;

    for( i = 0; i < 10; i++){
        printf("%i, ", x[i]);
    }
    printf("\n\n");
}