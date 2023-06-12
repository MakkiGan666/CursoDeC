//¿Que es la memoria dinamina? 

#include <stdio.h>
#include <stdlib.h>

int main(){

    //memoria ESTATICA

    int i;
    int N = 50;
    int vector[N];

    for ( i = 0; i < N; i++){           
        vector[i] = i;
    }

     for ( i = 0; i < N; i++){           
        printf("%i, ", vector[i]+1);
    }
    printf("\n");
    
    system("pause");
    return 0;
}

int main(){

    //memoria PSEUDOESTATICA

    int i;
    int N;

    printf("Dame un valor para N: ");
    scanf("%i, "&N);

    int vector[N];

    for ( i = 0; i < N; i++){
        printf("%i, "vector[i]);
    }

    printf("\n");
    
    system("pause");
    return 0;
}

int main(){

    //memoria DINAMICA

    int i;
    int N;
    int *vector;

    printf("Dame un valor para N: ");
    scanf("%i, "&N);

    vector =(int*)malloc(N*sizeof(int));
    if (vector == NULL){
        printf("No se ha podido reservar la memoria.\n");
    }
    else{
        for (size_t i = 0; i < N; i++){
            *(vector + i ) = i;
        }

        for (size_t i = 0; i < N; i++){
            printf("&i, ", *(vector + i));
        }
        printf("\n");
        
        printf("Dime otro valor para N: ");
        scanf("%i, "&N);
        
        vector =(int*)malloc(N*sizeof(int));
        if (vector == NULL){
            printf("No se ha podido reservar la memoria.\n");
        } 
        else{
            for (size_t i = 0; i < N; i++){
            *(vector + i ) = i;
            }

            for (size_t i = 0; i < N; i++){
                printf("&i, ", *(vector + i));
            }
            
            printf("\n");
        }

    }

    system("pause");
    return 0;
}