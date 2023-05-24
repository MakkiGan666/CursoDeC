//Hacer la serie fibonacci hasta el termino n introducido por teclado

#include <stdio.h>

int main(){

    int x, y, res, n, i;

    printf("Introduce un numero por teclado pa: \n");
    scanf("%i", &n);

    i = 3;
    x = 0;
    y = 1;
    
    if( n == 1){
        printf("0");
    } else{
        printf("0, 1, ");
    }

    while(i <= n){
        res = x + y;
        printf("%i, ", res);
        x = y;
        y = res;        
        i++;
    }

    return 0;
}