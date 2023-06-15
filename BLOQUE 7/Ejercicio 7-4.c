//Crear una estructura que represente un libro y usando los string dinamicos 

#include <stdio.h>

typedef struct{
    char nombre[50];
    char autor[50];
}libro;

void cambio (char aux[100]);

int main(){

    

    system("pause");
    return 0;
}

void cambio(char aux[50]){
    int i, temp, = 0;

    for ( i = 0; i < 100; i++){
        if (aux[i] == '\n'){
            aux[i] = '\0';
            temp = 1;
        }
        
    }
    
}