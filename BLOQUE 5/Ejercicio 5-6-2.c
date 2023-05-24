//Cambiar en una frase dada la letra a por un espacio

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void funcion(char c1[]);

int main(){

    char c1[] = "Si os esta gustando este video, os podeis suscribir al canal.";

    funcion(c1); 

    printf("%s\n", c1);

    system("pause");
    return 0;
}

void funcion(char c1[]){
    int limite, i;

    limite = strlen(c1);

    for (i = 0 ; i < limite ; i++){
        if(c1[i] == 'a'){
            c1[i] = ' ';
        }
    }
}