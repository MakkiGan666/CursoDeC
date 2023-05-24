//Saber si un numero es primo  

#include <stdio.h>

int main(){

    int n, i, j, aux;

    printf("Introduce un numero primo, porfis UwU \n");
    scanf("%i", &n);

    j = 0;

    for(i = 2; i < n; i++);{
       aux = n % i;
        if (aux == 0){
            j = 1;
        } 
    }

    if (j == 1){
        printf("%i No es un numero primo \n", n);
    } else{
        printf("%i Si es un numero primo \n", n);
    }
        

    return 0;
}