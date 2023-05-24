//Realizar un traductor de ingles a español y viceversa con un vector de estructuras

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50


typedef struct{
    
    char eng[N];
    char esp[N];
    int lleno;

}traductor;

traductor trad[N];

void vacio();
void añadir();
void traducir();
void tradu(int op);
 
int main(){

    int op;
    char key;

    vacio();

    do{
        do{
            printf("Elige que desea hacer:\n");
            printf("(1) Añadir palabras al traductor.\n");
            printf("(2) Buscar traduccion de una palabra.\n");
        }while( op < 1 || op > 2);

        switch(op){
            case 1:
                añadir();
                break;
            case 2:
                //traducir();
                break;
        }
        printf("Introduce si desea realizar otra operacion: (S/N) ");
        scanf("%c", &key);

    } while (key == 'S' || key == 's');

    system("pause");
    return 0;
}

void vacio(){
    int i;

    for(i = 0; i < N ; i++){
        trad[i].lleno = 0;
    }
}

void añadir(){
    int i;

    for ( i = 0; i < N; i++){
        if(trad[i].lleno == 0){
            printf("Introduce la palabra en Ingles: ");
            fflush(stdin);
            fgets(trad[i].eng, N, stdin);
            cambio(trad[i].eng);
            printf("Introduce la palabra en Español: ");
            fflush(stdin);
            fgets(trad[i].esp, N, stdin);
            cambio(trad[i].esp);

            trad[i].lleno = 1;
        }
    }
}

void traducir(){

    int op;

    do{
        printf("Elige que desea hacer:\n");
        printf("(1) Traducir de Ingles a Español\n");
        printf("(2) Traducir de Español a Ingles\n");
    }while( op < 1 || op > 2);
        
    switch(op){
        case 1:
            tradu(op);
            break;
        case 2:
                tradu(op);
            break;
    }
}

void tradu(int op){
    int i, j, temp;
    char aux[N];

    printf("introduce la palabra que deseas buscar: ");
    fflush(stdin);
    fgets(aux, N, stdin);
    cambio(aux);

    if (op == 1){
        for ( i = 0; i < N && temp == 0; i++){
            j = strcmp(aux, trad[i].eng);
            if (j == 0){
                printf("La traduccion de %s es %s.\n", trad[i].eng , trad[i].esp);
                temp = 1;
            }
        }   
        
    } else{
        for ( i = 0; i < N && temp == 0; i++){
            j = strcmp(aux, trad[i].esp);
            if (j == 0){
                printf("La traduccion de %s es %s.\n", trad[i].esp , trad[i].eng);
                temp = 1;
            }
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