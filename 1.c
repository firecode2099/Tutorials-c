#include<stdio.h>
#include <stdlib.h>

/*
-----------------------
-create file
-write on
-close file
----------------------
*/


int main()
{
//create pointer
 FILE *f;

 //Open and write
 f=fopen("t.txt","w");
 //string to write file
 fprintf(f, "%s","Cathy");

 //close
 fclose(f);

 //print by screen we that write file
 printf(" file created");

return 0;
}
