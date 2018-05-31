//Program 7.10
//Nama File: passbyvalue.c
//Program contoh parameter passed by value C

#include <stdio.h>
#include <stdlib.h>

void perkalian_lima(int bil);

int main(int argc, char *argv[])
{
  int bil_isi;
  
  printf("Masukkan bilangan: ");
  scanf("%i",&bil_isi);
  perkalian_lima(bil_isi);
  printf("Bilangan input: %i\n\n",bil_isi);
    
  return 0;
}

void perkalian_lima(int bil)
{
  bil=bil*5;
  printf("Hasil perkalian lima : %i\n",bil);
}
