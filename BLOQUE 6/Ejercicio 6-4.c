//Realiza un programa para controlar varias bibliotecas usando estructuras dentro de estructuras

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 50

typedef struct{
    char nombre_lib[N];
    char autor[N];
    int lleno_lib;
}libro;

typedef struct{
    char nombre_bi[N];
    libro lib[10];
    int lleno_bi;
}biblioteca;

biblioteca bi[3];

void vacio();
void cambio(char palabra[N]);
void anadebi();
void anadelib();
void consulta()

int main(){
    int op;
    char key;

    vacio();

    do{
        do{
            printf("Elige una opcion a realizar: \n");
            printf("(1) añadir un nueva biblioteca.\n");
            printf("(2) añadir un libro a la biblioteca.\n");
            printf("(3) consultar un libro\n");
            scanf("%i" &op);
        }while (op < 1 || op > 3);

        switch (op){
        
            case 1:{
                anadebi();
                break;
            }
            case 2:{
                anadelib();
                break;
            }
            case 3:{
                consulta();
                break;
            }
        }
        printf("Quieres realizar alguna operacion mas? (S/N)) ");
        fflush(stdin);
        scanf("%c", &key);
    }while(key == 'S' || key == 's');

    system("pause");
    return 0;
}

void vacio(){
    int i, j;
    for ( i = 0; i < 3; i++){
        bi[i].lleno_bi = 0;
        for ( j = 0; j < 10; j++){
            bi[i].lib[j].lleno_lib = 0; 
        }   
    }   
}

void cambio(char palabra[N]){
    int i;

    for ( i = 0; i < N; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\o';
        }
    }
    
}

void anadebi(){
    int i, aux;
    aux = 0;
    
    for ( i = 0; i < 3 && aux == 0 ; i++){
        if(bi[i].lleno_bi == 0){
            printf("Introduce un nombre para la biblioteca: ");
            fflush(stdin);
            fgets(bi[i].nombre_bi, N, stdin);
            cambio(bi[i].nombre_bi);

            bi[i].lleno_bi = 1;
            aux = 1;        
        }
    }
    if (aux == 0){
        printf("No queda ningun hueco libre para ninguna biblioteca");
    }    
}

void anadelib(){
    int i, op, aux;

    aux = 0;

    for ( i = 0; i < 3; i++){
        if (bi[i].lleno_bi == 1){
            printf("(%i) %s.\n",i, bi[i].nombre_bi);
        }
    }
    scanf("&i",&op);

    for ( i = 0; i < 10 && aux == 0; i++)
    {
        if(bi[op].lib[i].lleno_lib == 0){
            printf("Introduce el nombre del libro: ");
            fflush(stdin);
            fgets(bi[op].lib[i].nombre_lib, N, stdin);
            cambio(bi[op].lib[i].nombre_lib);

            printf("Introduce el nombre del autor: ");
            fflush(stdin);
            fgets(bi[op].lib[i].autor, N, stdin);
            cambio(bi[op].lib[i].autor);

            bi[i].lib[i].lleno_lib = 1;
            aux = 1;
        }
    }
    
}

void consulta(){

    int op, i, j, aux;
    char buscar[N];

    aux = 1;

    do{
        printf("Que quieres buscar, Nombre de libro o Nombre de autor: \n");
        printf("(1)Nombre de libro.\n"):
        printf("(2)Nombre de autor\n")
        scanf("%i", &op)
    }while (op < 1 || op > 2);

    switch(op){
        case 1:{
            printf("Introduce el nombre del libro");
            fflush(stdin);
            fgets(buscar, N, stdin);
            cambio(buscar);

            for ( i = 0; i < 3; i++){
                aux = 1;
                for ( j = 0; j < 10; j++){
                    aux = strcmp(buscar, bi[i].lib[j].nombre_lib);
                    if (aux == 0){
                        printf("El libro %s se encuentra en la biblioteca %s.\n", buscar, bi[i].nombre_bi);
                        printf("El autor del libro es %s.\n", bi[i].lib[j].autor);
                    }
                    
                }
            }
            break;
        }
        case 2:{
            printf("Introduce el nombre del autor");
            fflush(stdin);
            fgets(buscar, N, stdin);
            cambio(buscar);

            for ( i = 0; i < 3; i++){
                aux = 1;
                for ( j = 0; j < 10; j++){
                    aux = strcmp(buscar, bi[i].lib[j].autor);
                    if (aux == 0){
                        printf("El libro %s se encuentra en la biblioteca %s.\n", bi[i].lib[j].nombre_lib, bi[i].nombre_bi);
                    }
                    
                }
            }
            break;
        }
    }
    



}