//Program 7.2
//Nama File: voidparameter.c
//Program void menggunakan parameter  C

#include <stdio.h>
#include <stdlib.h>

void tampil_nama(int nim,char nama[31],char alamat[51])
{
  printf("NIM anda         = %i\n\a",nim);
  printf("Nama anda        = %s\n\a",nama);
  printf("Alamat anda      = %s\n\n\a",alamat);
}

int main(int argc, char *argv[])
{
  int nim_isi;
  char nama_isi[31],alamat_isi[51];
  printf("Masukkan NIM     : ");
  scanf("%i",&nim_isi);
  printf("Masukkan Nama    : ");fflush(stdin);
  fgets(nama,30,stdin);
  printf("Masukkan Alamat  : ");fflush(stdin);
  fgets(nama,50,stdin);
  printf("\n");
  tampil_nama(nim_isi,nama_isi,alamat_isi);
    
  return 0;
}
