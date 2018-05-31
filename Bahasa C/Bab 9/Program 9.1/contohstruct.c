//Program 9.1
//Nama File: contohstruct.c
//Program contoh penggunaan struct C

#include <stdio.h>
#include <stdlib.h>

//deklarasi struct
typedef struct 
{
  long int nip;
  char nama[31];
  char alamat[51];
}data_dosen;

//deklarasi variabel struct
data_dosen dosen1,dosen2;

int main(int argc, char *argv[])
{
  //input           
  printf("Data Dosen Pertama\n");
  printf("------------------\n");
  printf("NIP    : ");
  scanf("%li",&dosen1.nip);
  printf("Nama   : ");fflush(stdin);
  gets(dosen1.nama);
  printf("Alamat : ");fflush(stdin);
  gets(dosen1.alamat);
  printf("\n\n");

  printf("Data Dosen Kedua\n");
  printf("------------------\n");
  printf("NIP    : ");
  scanf("%li",&dosen2.nip);
  printf("Nama   : ");fflush(stdin);
  gets(dosen2.nama);
  printf("Alamat : ");fflush(stdin);
  gets(dosen2.alamat);
  printf("\n\n");
  
  //output
  printf("Data Dosen Pertama\n");
  printf("------------------\n");
  printf("NIP    : %li\n",dosen1.nip);
  printf("Nama   : %s\n",dosen1.nama);
  printf("Alamat : %s\n",dosen1.alamat);
  printf("\n\n");
  
  printf("Data Dosen Kedua\n");
  printf("------------------\n");
  printf("NIP    : %li\n",dosen2.nip);
  printf("Nama   : %s\n",dosen2.nama);
  printf("Alamat : %s\n",dosen2.alamat);
  printf("\n\n");
    
  return 0;
}
