//hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra "s" no pare

#include <stdio.h>

int main(){

    char c;

    do{
        printf("introduci una letra negrito.\n");
        fflush (stdin);
        scanf("%c", &c);
    } while (c !='s');
    

    return 0;
}