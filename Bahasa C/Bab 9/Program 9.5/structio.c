//Program 9.5
//Nama File: structio.c
//Program struct sebagai parameter i/o C

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int bil1;
  int bil2;
}data_bilangan;

void jumlah_bilangan(data_bilangan *bilangan)
{
  (*bilangan).bil1=(*bilangan).bil1+1;
  (*bilangan).bil2=(*bilangan).bil2+2;
}

int main(int argc, char *argv[])
{
  data_bilangan bilangan;
  printf("Masukkan bilangan pertama : ");
  scanf("%i",&bilangan.bil1);
  printf("Masukkan bilangan kedua   : ");
  scanf("%i",&bilangan.bil2);
  printf("\n");
  jumlah_bilangan(&bilangan);
  printf("Bilangan pertama ditambah satu = %i\n"
          ,bilangan.bil1);
  printf("Bilangan kedua ditambah dua    = %i\n"
          ,bilangan.bil2);
  printf("\n");
    
  return 0;
}
