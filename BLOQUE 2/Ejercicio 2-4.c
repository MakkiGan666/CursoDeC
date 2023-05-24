//Escribe un programa que acepte tres numeros, horas, minutos, segundos y devuelva la hora que sera dentro de un segundo, controlando que sea una hora correcta 

#include <stdio.h>

int main(){
    int Hora, Minuto, Segundo;

    printf("Ingrese la hora deseada aqui-->");
    scanf("%i", &Hora);

    printf("Ingrese el minuto deseado aqui-->");
    scanf("%i", &Minuto);

    printf("Ingrese el segundo deseado aqui-->");
    scanf("%i", &Segundo);

    if(Hora <= 23 && Hora >= 1 && Minuto <= 59 && Minuto >=1 && Segundo >= 1 && Segundo <= 59){
        Segundo = Segundo + 1; 
        if(Segundo == 60){
            Segundo = 0;
            Minuto = Minuto + 1;
        }
        if(Minuto == 60){
            Minuto = 0;
            Hora = Hora + 1;
        }
        printf("La hora es %02i:%02i:%02i", Hora, Minuto, Segundo);
    }
    else{
        printf("El tiempo indicado no es posible");
    }
    return 0;
}