//Program 9.2
//Nama File: structinstruct.c
//Program struct di dalam struct C

#include <stdio.h>
#include <stdlib.h>

//struct pertama
typedef struct
{
  int tanggal;
  int bulan;
  int tahun;
}data_tanggal;

//struct dalam struct
typedef struct
{
  long int nip;
  char nama[31];
  char alamat[51];
  data_tanggal tanggal_lahir;  
}data_dosen;

data_dosen dosen;

int main(int argc, char *argv[])
{
  printf("NIP           : ");
  scanf("%li",&dosen.nip);
  printf("Nama          : ");fflush(stdin);
  gets(dosen.nama);
  printf("Alamat        : ");fflush(stdin);
  gets(dosen.alamat);
  printf("Tanggal lahir   : ");
  scanf("%i",&dosen.tanggal_lahir.tanggal);
  printf("Bulan lahir     : ");
  scanf("%i",&dosen.tanggal_lahir.bulan);
  printf("Tahun lahir     : ");
  scanf("%i",&dosen.tanggal_lahir.tahun);
  printf("\n\n");
  printf("NIP           = %li\n",dosen.nip);
  printf("Nama          = %s\n",dosen.nama);
  printf("Alamat        = %s\n",dosen.alamat);
  printf("Tanggal lahir = %i\n",dosen.tanggal_lahir.tanggal);
  printf("Bulan lahir   = %i\n",dosen.tanggal_lahir.bulan);
  printf("Tahun lahir   = %i\n",dosen.tanggal_lahir.tahun);
  printf("\n\n");
    
  return 0;
}
