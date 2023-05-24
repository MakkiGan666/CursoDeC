//imprimir por pantalla todos los numeros primos entre dos y dos mil 

#include <stdio.h>

int main(){

    int i, j, k, aux;

    for(i = 2; i <= 2000; i++){

        k = 0;

        for(j = 2; j < i && k != 1; j++){ 
            aux = i%j;
            if(aux == 0){
                k = 1;
            }
        }
        if( k != 1 ){
            printf("%i, ",i );
        }
    }

    return 0;
}