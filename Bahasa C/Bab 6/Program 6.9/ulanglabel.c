//Program 6.9
//Nama File: ulanglabel.c
//Program perulangan menggunakan label C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  i=0;
  awal:
    i=i+1;
    printf("%i\n",i);
    
    if(i<10)
        goto awal;
    else
        goto akhir;
    
    printf("Perintah ini tak dieksekusi\n");
    printf("Perintah ini juga tak dieksekusi\n");
       
  akhir:
    printf("\n");
    
  return 0;
}
