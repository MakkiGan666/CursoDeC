/*
Version propia ligeramente mejorado el output
 y bien comentado. Espero le sea útil a alguien
Bloque 07.03: Vector con 100 enteros entre 0 y 2 y contar con un vector dinamico cuantas veces aparece cada uno

Uso de funciones Calloc y Free

Version por: Cesar Gamboa

*/



#include<stdio.h>

#include<stdlib.h>

#include<time.h>



void aleatorio(int vector[], int n);



int main(){

 system("color 0A");

 system("cls");

 int i,op;

 int N=3,M=10;

 int vector[M];

 int *contador;

 //calloc se usa para lo mismo que malloc, para asignar memoria, pero se diferencia en que no se multiplican los elementos, o sea se declara (*int)calloc(N,sizeof(int))

 //la otra diferencia es que calloc inicializa el espacio de memoria luego de asignarlo. Malloc se usa cuando no importa que hay dentro de lvector dinamnico, mientras que calloc 

 // se usa cuando querramos que el contador se inicialice en 0. Calloc es mas lenta por que inicializa los elementos.

 contador = (int*)calloc(N,sizeof(int));//asigna espacio de memoria e inicializa los espacios del vector en 0

 if(contador==NULL){

  printf("No se ha podido asignar la memoria\n");

 }else{

  //inicializar vector estatico con numeros aleatorios

  aleatorio(vector,M);

  //verificar cuantas veces se repite un numero

  for(i=0;i<M;i++){

   op=vector[i];//en op se guarda el valor del vector fijo en cada momento

   *(contador+op)+=1;//se guarda en la posicion de acuerdo al valor de op  

  }

  printf("Conteo total del valores repetidos en el vector\n");

  printf("Repeticiones: 0 \t 1 \t 2\n");

  printf("Cantidad:    ");

  for (i=0;i<3;i++){   

   printf(" %i \t",*(contador+i));

  }

  printf("\n\n");

 }

 free(contador);//libera la memoria dinamica usada. es una buena costumbre usarlo siempre

 system("pause");

 return 0;

}



void aleatorio(int vector[], int n){

 int i;

 srand(time(NULL));

 for(i=0;i<n;i++){

  vector[i]=rand() %3;

  printf("%i ",vector[i]);

 }

 printf("\n\n");

}