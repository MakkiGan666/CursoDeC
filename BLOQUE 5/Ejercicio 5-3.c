//introducir valores numericos en un array mediante puntero

#include <stdio.h>

void funcion(int *vec);
void leer(int *vec);

int main(){

    int vec[3];

    funcion(vec);
    leer (vec);

    return 0;
}

void funcion(int *vec){
    int i;

    for (i = 0; i < 3; i++){
        printf("introduce un valor para la posicion %i: ", i+1);
        scanf("%i", (vec+i));
    }
}

void leer(int *vec){
    int i;

    for( i = 0; i < 3; i++){
        printf("%i ",*(vec+i));
    }
}