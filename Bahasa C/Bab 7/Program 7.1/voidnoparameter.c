//Program 7.1
//Nama File: voidnoparameter.c
//Program void tanpa parameter  C

#include <stdio.h>
#include <stdlib.h>

//prototipe fungsi tidak wajib 
//jika user-defined method didefinisikan
//sebelum method main

void tampil_nama();

void tampil_nama()
{
  int nim;
  char nama[31],alamat[51];

  printf("Masukkan NIM     : ");
  scanf("%i",&nim);
  printf("Masukkan Nama    : ");fflush(stdin);
  gets(nama);
  printf("Masukkan Alamat  : ");fflush(stdin);
  gets(alamat);
  printf("\n");
  printf("NIM anda         = %i\n\a",nim);
  printf("Nama anda        = %s\n\a",nama);
  printf("Alamat anda      = %s\n\n\a",alamat);
}

int main(int argc, char *argv[])
{
  tampil_nama();
    
  return 0;
}
