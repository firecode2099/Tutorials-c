//Prueba de sort
#include<stdio.h>

int main(){


printf("hola c de nuevo\n");

//array de enteros
int x[]={5,4,1};



if(x[0]>x[1] && x[0]>x[2]){


printf("los numeros son :%i \n", x[2] );



}

if(x[1]<x[0] && x[1]>x[2]){


printf("los numeros son :%i \n", x[1] );



}


if(x[2]<x[1] && x[2]<x[0]){


printf("los numeros son :%i \n", x[0] );



}

return 0;
}
