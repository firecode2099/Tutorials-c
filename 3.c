//Marcpp2016 form github tuto


//Open image from external program

int main (){
//Chache system para color
  
  system ("color 1b");
//Variable char
  char x;

//Input Screen from user
  printf("\t\t\tAbrimos imagen?\n");
  printf("\t\t\ts- abrir \n");//opcion 1
  printf("\t\t\tn- cerrar \n");//opcion 1

//Scanf for char
  scanf("%c",&x);
//Control if 
if(x=='s'){

//System open program path
  system ("1.jpg");//En este caso mi imagen la llamare (1.jpg)
}

else

//close if put n letter
  printf("Cerramos!\n");


//end program
return 0;
}
