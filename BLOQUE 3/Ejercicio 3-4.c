//hacer las tablas de muntiplicar del 1 al 9

#include <stdio.h>

int main(){

    int i, j;

    for (i = 1; i <=9; i++){
        for (j = 1; j <= 10; j++){
            printf ("%i * %i = %i.\n", i, j, i*j);
        }
    }

    return 0;
}