//Program 9.7
//Nama File: structnilaibalik.c
//Program struct sebagai nilai balik C

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int tahun;
  int bulan;
  int tanggal;
}data_tanggal;

data_tanggal tanggal_lahir()
{
  data_tanggal tgl;
  tgl.tahun=1986;
  tgl.bulan=6;
  tgl.tanggal=5;
  return tgl;
}

int main(int argc, char *argv[])
{
  data_tanggal tanggal;
  tanggal=tanggal_lahir();             
  printf("Tanggal Lahir = %i-%i-%i\n\n"
          ,tanggal.tanggal,tanggal.bulan,tanggal.tahun);
    
  return 0;
}
