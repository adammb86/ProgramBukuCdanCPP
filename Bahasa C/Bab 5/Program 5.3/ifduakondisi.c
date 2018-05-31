//Program 5.3
//Nama File: ifduakondisi.c
//Program contoh kasus percabangan dua kondisi C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int bil;
  printf("Bilangan Bulat: ");scanf("%i",&bil);
  if(bil>=0)
  {

    printf("\nBilangan= %i\n",bil);
    printf("Ini bilangan positif\n\n");
  }

  else
  {

    printf("\nBilangan= %i\n",bil);
    printf("Ini bilangan negatif\n\n");
  }         
    
  return 0;
}
