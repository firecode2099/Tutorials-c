
#include<stdio.h>
#include<conio.h>

//metodo de la burbuja

int main(){


//Declaramos un array

int array[3]={50,1,44};

int i,j,aux;

//primer for
 for(i=0;i<3;i++){

     //for anidado
       for(j=0;j<3;j++){
               //condicional if comparamos primero con el segundo
            if(array[j]>array[j+1]){

                //imvertimos el primero por el segundo con un aux
               aux=array[j];
               array[j]=array[j+1];
               array[j+1]=aux;

         }



      }



 }

//recorremos el array en una direccion Ascendente

for(i=0;i<3;i++){

    printf("%i ",array[i]);

 }


    printf("\n ");

//recorremos el array en una direccion Decendente

for(i=2;i>=0;i--){

     printf(" %i ",array[i]);

 }


return 0;
}
