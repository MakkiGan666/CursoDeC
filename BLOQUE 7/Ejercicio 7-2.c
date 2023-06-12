//  Realizar un vector dinamico de 10 elementos eleatorios comprendidos entre 0 y 2 y eliminar todos los numeros repetidos reajustando el vector

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio (int *vector, int N);

int main(){
     
    int N = 10;
    int *vector;

    vector = (int*)malloc(N*ziseof(int));
    if (vector == NULL){
        printf("No se ha podido reservar espacio de memoria.\n");
    } else {
        
    }
    

    system("pause");
    return 0;
}

void aleatorio(int *vector, int N){
    int i;
    srand(time NULL);

    for ( i = 0; i < N; i++){
        *(vector + 1) = rand() % 3;
        printf("%i, ", *(vector+i));
    }
    printf("\n");
    
}