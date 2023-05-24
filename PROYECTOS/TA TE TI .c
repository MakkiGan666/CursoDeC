//Tres en raya
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void loop(char c[3][3]);
void Intro_Primera(char c[3][3]);
void tablero(char c[3][3]);
void Intro_Yo(char [3][3]);
void Intro_IA(char c[3][3]);
int ganador(char c[3][3]);

int main(){

    char c[3][3];

    loop (c);//Llama a todas las funciones fundamentales y hace un refresco de pantalla

    return 0;
}

void loop(char c[3][3]){
    int i, j;

    i = 0;

    Intro_Primera(c);
    tablero(c);

    do{
        system("cls");
        tablero(c);
        if (i % 2 == 0){
            Intro_Yo(c);
        }else {
            Intro_IA(c);
        }
        
        j = ganador(c);

        i++;
    }while ( i <= 9 && j == 2);

    if( j == 0){
        printf("Bien ahi loco, sos un capo.\n\n");
    } else if(j == 1) {
        printf("JAJAJA SOS RE INUTIL HIJO DE PUTA.\n\n");
    }else {
        printf("che, como vas a quedar en empate? gana y listo pelotudo \n\n");
    } 

}

void Intro_Primera(char c[3][3]){
    int i, j;

    char aux;

    aux = '1';

    for (i = 0 ; i < 3 ; i++){
        for( j = 0; j < 3; j++){
            c[i][j] = aux++; 
        }
    }
}

void Intro_Yo (char c[3][3]){
    
    char aux; 
    int i, j, k;

    do{
        do{
            printf("Coloca una ficha: \n");
            fflush(stdin);
            scanf("%c", &aux);
        } while(aux < '1' || aux > '9');

        k = 0;

        switch (aux){
            case '1': {
                i = 0; 
                j = 0;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '2': {
                i = 0; 
                j = 1;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '3': {
                i = 0; 
                j = 2;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '4': {
                i = 1; 
                j = 0;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '5': {
                i = 1; 
                j = 1;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '6': {
                i = 1; 
                j = 2;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }
            
            case '7': {
                i = 2; 
                j = 0;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '8': {
                i = 2; 
                j = 1;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }

            case '9': {
                i = 2; 
                j = 2;
                if (c[i][j] == 'x' || c[i][j] == 'o'){
                    k = 1;
                    printf("La casilla esta ocupada, intentalo con otro numero!!\n\n");
                }
                break; 
            }


        }
    }while( k == 1);

    c[i][j] = 'x';
}

void Intro_IA(char c[3][3]){

    int i, j, k;    

    srand(time(NULL));

    do{
        i = rand() % 3; 
        j = rand() % 3;
        k = 0;

        if (c[i][j] == 'x' || c[i][j] == 'o'){
            k = 1;
        }
    }while (k == 1);
    
    c[i][j] = 'o';
}

void tablero(char c[3][3]){
    int i, j;

    for ( i = 0 ; i < 3; i++){
        for( j = 0 ; j < 3 ; j++){
            if( j < 2){
                printf(" %c |", c[i][j]);
            } else {
                printf (" %c ",c[i][j]);
            }
        }
        if(i < 2){
            printf("\n-----------\n");
        }
    }
    printf("\n\n");
} 

int Ganador(char c[3][3]){
    int i,j;
    if(c[0][0] == "x" || c[0][0] == "o"){
        if((c[0][0]) == (c[0][1]) && (c[0][0]) == (c[0][2])){
            if (c[0][0] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            }
        }
        if(c[0][0] == c[1][0] && c[0][0] == c[2][0]){
            if (c[0][0] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            }
        }
    }
    if(c[1][1] == "x" || c[1][1] == "o"){
        if (c[1][1] == c[0][0] && c[1][1] == c[2][2]){
           if (c[1][1] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            } 
        }

        if(c[1][1] == c[1][0] && c[1][1] == c[1][2]){
            if (c[1][1] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            } 
        }
         if(c[1][1] == c[2][0] && c[1][1] == c[0][2]){
            if (c[1][1] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            } 
        }
         if(c[1][1] == c[0][1] && c[1][1] == c[2][1]){
            if (c[1][1] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            } 
        }
    }
    if(c[2][2] == "x" || (c[2][2]) == "o"){
        if((c[2][2]) == (c[2][0]) && (c[2][2]) == c[2][1]){
            if (c[2][2] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            }
        }
        if((c[2][2]) == (c[0][2]) && (c[2][2]) == c[1][2]){
            if (c[2][2] == "x"){
                return 0; //GANAMOS
            }else{
                return 1; //PERDIMOS
            }
        }
    }
    return 2;
}