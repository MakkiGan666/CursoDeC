#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loop(char c[3][3]);
void Intro_Primera(char c[3][3]);
void tablero(char c[3][3]);
void Intro_Yo(char c[3][3]);
void Intro_IA(char c[3][3]);
int ganador(char c[3][3]);

int main() {
    char c[3][3];
    loop(c);
    return 0;
}

void loop(char c[3][3]) {
    int i, j;
    i = 0;
    Intro_Primera(c);
    tablero(c);
    do {
        system("cls");
        tablero(c);
        if (i % 2 == 0) {
            Intro_Yo(c);
        } else {
            Intro_IA(c);
        }
        j = ganador(c);
        i++;
    } while (i <= 9 && j == 2);
    if (j == 0) {
        printf("¡Ganaste! ¡Eres un capo!\n\n");
    } else if (j == 1) {
        printf("¡Perdiste! Eres un inútil, hijo de puta.\n\n");
    } else {
        printf("¡Empate! ¡Intenta ganar la próxima vez, pelotudo!\n\n");
    }
}

void Intro_Primera(char c[3][3]) {
    int i, j;
    char aux;
    aux = '1';
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = aux++;
        }
    }
}

void Intro_Yo(char c[3][3]) {
    char aux;
    int i, j, k;
    do {
        do {
            printf("Coloca una ficha: \n");
            fflush(stdin);
            scanf("%c", &aux);
        } while (aux < '1' || aux > '9');
        k = 0;
        switch (aux) {
            case '1':
                i = 0;
                j = 0;
                break;
            case '2':
                i = 0;
                j = 1;
                break;
            case '3':
                i = 0;
                j = 2;
                break;
            case '4':
                i = 1;
                j = 0;
                break;
            case '5':
                i = 1;
                j = 1;
                break;
            case '6':
                i = 1;
                j = 2;
                break;
            case '7':
                i = 2;
                j = 0;
                break;
            case '8':
                i = 2;
                j = 1;
                break;
            case '9':
                i = 2;
                j = 2;
                break;
        }
        if (c[i][j] == 'x' || c[i][j] == 'o') {
            k = 1;
            printf("La casilla está ocupada, intenta con otro número.\n\n");
        } else {
            c[i][j] = 'x';
        }
    } while (k == 1);
}

void Intro_IA(char c[3][3]) {
    int i, j, k;
    srand(time(NULL));
    do {
        i = rand() % 3;
        j = rand() % 3;
        k = 0;
        if (c[i][j] != 'x' && c[i][j] != 'o') {
            c[i][j] = 'o';
            k = 1;
        }
    } while (k == 0);
}

void tablero(char c[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j < 2) {
                printf(" %c |", c[i][j]);
            } else {
                printf(" %c ", c[i][j]);
            }
        }
        if (i < 2) {
            printf("\n-----------\n");
        }
    }
    printf("\n\n");
}

int ganador(char c[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        if (c[i][0] == c[i][1] && c[i][0] == c[i][2]) {
            if (c[i][0] == 'x') {
                return 0; // Ganaste
            } else if (c[i][0] == 'o') {
                return 1; // Perdiste
            }
        }
        if (c[0][i] == c[1][i] && c[0][i] == c[2][i]) {
            if (c[0][i] == 'x') {
                return 0; // Ganaste
            } else if (c[0][i] == 'o') {
                return 1; // Perdiste
            }
        }
    }
    if (c[0][0] == c[1][1] && c[0][0] == c[2][2]) {
        if (c[0][0] == 'x') {
            return 0; // Ganaste
        } else if (c[0][0] == 'o') {
            return 1; // Perdiste
        }
    }
    if (c[0][2] == c[1][1] && c[0][2] == c[2][0]) {
        if (c[0][2] == 'x') {
            return 0; // Ganaste
        } else if (c[0][2] == 'o') {
            return 1; // Perdiste
        }
    }
    return 2; // Empate
}