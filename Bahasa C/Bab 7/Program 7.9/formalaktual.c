//Program 7.9
//Nama File: formalaktual.c
//Program contoh parameter formal aktual C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//bil di sini parameter formal
float akar_pangkat(int bil)
{
  return (sqrt(bil));
}

int main(int argc, char *argv[])
{
  int bil;           
  printf("Masukkan bilangan : ");
  scanf("%i",&bil);

  //bil di sini parameter aktual
  printf("Akar pangkat dua  = %.2f\n\n",akar_pangkat(bil));
    
  return 0;
}
