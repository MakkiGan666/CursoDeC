//Crear un formulario de Registro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char empleo[50];
    int edad;
}reg;

int main(){

    reg f1, f2;

    /*====================== f1 =======================*/
    printf("introduce valores para el formulario 1: \n");
    printf("introduce tu nombre: ");
    fgets(f1.nombre,50,stdin);

    printf("introduce tu empleo: ");
    fflush(stdin);
    fgets(f1.empleo,50,stdin);

    printf("introduce tu edad: ");
    scanf("%i", &f1.edad);

    /*====================== f2 =======================*/
    printf("introduce valores para el formulario 2: \n");
    printf("introduce tu nombre: ");
    fflush(stdin);
    fgets(f2.nombre,50,stdin);
    

    printf("introduce tu empleo: ");
    fflush(stdin);
    fgets(f2.empleo,50,stdin);

    printf("introduce tu edad: ");
    scanf("%i", &f2.edad);


    printf("Los valores son: \n");
    printf("El nombre de f1: %s",f1.nombre);
    printf("El nombre de f2: %s",f2.nombre);

    printf("El empleo de f1: %s",f1.empleo);
    printf("El empleo de f2: %s",f2.empleo);

    printf("La edad de f1: %i\n",f1.edad);
    printf("La edad de f2: %i\n",f2.edad);


    system("pause");
    return 0;
}