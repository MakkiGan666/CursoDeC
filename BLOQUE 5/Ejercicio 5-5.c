//Introducir una frase como cadena de caracteres(String)

#include <stdio.h>

    /*FORMA 1*/ 

int main(){
    //si queremos guardar un numero determinado de caracteres simepre deberemos declarar un string con un elemento mas

    char vector[13];

    printf("Introduce una frase: ");
    scanf("%s", &vector);

    printf("%s\n\n", vector);

    return 0;
} //En el scanf, se detiene en el primer espacio vacio que aparezca

    /*FORMA 2*/

int main(){
    //si queremos guardar un numero determinado de caracteres simepre deberemos declarar un string con un elemento mas

    char vector[13];

    printf("Introduce una frase: ");
    gets(vector);

    printf("%s\n\n", vector);

    return 0;
} //Imprime absolutamente todo lo que se le ordene sin importar la cantidad de memoria que le hayamos asignado


    /*FORMA 3*/

int main(){
    //si queremos guardar un numero determinado de caracteres simepre deberemos declarar un string con un elemento mas

    char vector[13];

    printf("Introduce una frase: ");
    fgets(vector, 13, stdin);

    printf("%s\n\n", vector);

    return 0;
} // Es la forma mas eficiente de introducir una cadena de caracteres
