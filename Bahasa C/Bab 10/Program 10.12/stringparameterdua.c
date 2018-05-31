//Program 10.12
//Nama File: stringparameterdua.c
//Program string sebagai parameter fungsi C
//cara kedua

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nama_barang(char kode_barang[],char *nama_brg)
{
  if(strcmpi(kode_barang,"B001")==0)
     strcpy(nama_brg,"Kemeja");
  else
  if(strcmpi(kode_barang,"B002")==0)
     strcpy(nama_brg,"Kaos");
  else
     strcpy(nama_brg,"Jas");
}

int main(int argc, char *argv[])
{
  char kode_barang[6];
  char nama_brg[7];
  printf("Masukkan kode barang : ");
  fflush(stdin);gets(kode_barang);
  nama_barang(kode_barang,nama_brg);
  printf("Nama barang= %s\n\n",nama_brg);
    
  return 0;
}
