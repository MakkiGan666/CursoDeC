//  Realizar un vector dinamico de 10 elementos eleatorios comprendidos entre 0 y 2 y eliminar todos los numeros repetidos reajustando el vector

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio (int *vector, int N);

int main(){
    int i, j, k; 
    int N = 10;
    int *vector;

    vector = (int*)malloc(N*sizeof(int));
    if (vector == NULL){
        printf("No se ha podido reservar espacio de memoria.\n");
    } else {
        aleatorio(vector, N);

        for ( i = 0; i < N; i++){
            j = i + 1;
            while (j < N){       
                
                if (*(vector + 1) == *(vector+j)){   
                    
                    for( k = j; k+1 < N; k++){
                        *(vector + k) = *(vector+k+1);
                    }
                    
                    N--;
                
                }else{
                    j++;
                }
                
            }
            
        }
        vector = (int*)realloc(vector,N*sizeof(int));
        
        if (vector == NULL){
            printf("No se a podido reservar el espacio de memoria.\n");
        }
        
        else {
            for ( i = 0; i < N; i++){
                printf("%i, ", *(vector));
            }
            printf("\n");
        }
        
        
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