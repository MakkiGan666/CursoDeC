//darle valor aun vector de 10 enteros y leerlos despues.

#include <stdio.h>

int main(){

    int v[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("Dale valor al vector en la posicion %i: ",i);
        scanf("%i", &v[i]);
    }   

    for(i = 0; i < 10; i++){
        printf("%i, ", v[i]);
    }


    return 0;
}