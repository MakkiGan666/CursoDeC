//Bloque 2-4: Condiciones Multiples

//Hacer un programa que diga si un numero se encuentra entre el 1 y el 10.

#include <stdio.h>

int main(){
    int x;

    printf("Ingrese un numero UwU aca --> ");
    scanf("%d", &x);

    if (x >= 1 && x <= 10){
        printf("Buen Numero capo, me gusta el %d *clap* *clap*",x);
    }
    else{
        printf("Que numero de mierda el %d",x);
    }

    return 0;
}