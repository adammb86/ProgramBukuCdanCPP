//Program 8.1
//Nama File: contoharray.c
//Program contoh array C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x[5];//deklarasi array
  printf("Masukkan nilai 1 : ");
  scanf("%i",&x[0]);
  printf("Masukkan nilai 2 : ");
  scanf("%i",&x[1]);
  printf("Masukkan nilai 3 : ");
  scanf("%i",&x[2]);
  printf("Masukkan nilai 4 : ");
  scanf("%i",&x[3]);
  printf("Masukkan nilai 5 : ");
  scanf("%i",&x[4]);
  printf("\n");

  printf("Nilai ke-1= %i\n",x[0]);
  printf("Nilai ke-2= %i\n",x[1]);
  printf("Nilai ke-3= %i\n",x[2]);
  printf("Nilai ke-4= %i\n",x[3]);
  printf("Nilai ke-5= %i\n\n",x[4]);

  return 0;
}
