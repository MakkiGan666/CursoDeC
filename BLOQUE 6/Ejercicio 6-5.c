//Realizar un programa para almacenar las notas de un alumno de las asignaturas de un trimestre 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int matemticas;
    int ingles;
    int fisica;
}notas;

void darnotas(notas *not);

int main(){

    notas not;
    darnotas(&not);

    system ("pause");
    return 0;
}

void darnotas(notas *not){
    
    printf("Introduzca la nota de Matematica: ");
    scanf("%i",&not->matemticas);

    printf("Introduzca la nota de Ingles: ");
    scanf("%i",&not->ingles);
    
    printf("Introduzca la nota de Fisica: ");
    scanf("%i",&not->fisica);
    

    printf("La nota de Matematicas es: %i.\n", not->matemticas);

    printf("La nota de Ingles es: %i.\n", not->ingles);

    printf("La nota de Fisica es: %i.\n", not->fisica);
}