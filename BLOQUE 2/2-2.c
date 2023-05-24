//Bloque 2-2: Ampliacion Estructuras selectivas

//Ejercicio: Realizar un programa que lea la entrada estandar de un numero entero positivo y escribe en la salida estandar si es par o impar

#include <stdio.h>

int main(){
    int x;

    printf("Ingrese un numero: ");
    scanf("%i", &x);

    if (x%2 == 0)
    {
        printf("El numero es par\n");
    }
    else{
        printf("El numero es impar\n");
    }
    
    return 0;
}