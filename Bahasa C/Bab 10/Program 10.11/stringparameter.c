//Program 10.11
//Nama File: stringparameter.c
//Program string sebagai parameter fungsi C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *nama_barang(char kode_barang[])
{
  if(strcmp(kode_barang,"B001")==0)
     return "Kemeja";
  else
  if(strcmp(kode_barang,"B002")==0)
     return "Kaos";
  else
     return "Jas";
}

int main(int argc, char *argv[])
{
  char kode_barang[6];
  char *nama_brg;
  printf("Masukkan kode barang : ");
  fflush(stdin);gets(kode_barang);

  //mencegah error huruf kecil
  strupr(kode_barang);
  nama_brg=nama_barang(kode_barang);
  printf("Nama barang= %s\n\n",nama_brg);
    
  return 0;
}
