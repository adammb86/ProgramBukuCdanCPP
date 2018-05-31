//Program 7.6
//Nama File: parametermasukan.c
//Program contoh parameter masukan C

#include <stdio.h>
#include <stdlib.h>

float kecepatan(float s, float t)
{
  float v;
  v=s/t;
  return v;
}

int main(int argc, char *argv[])
{
  float s_isi,t_isi,v;
  printf("Masukkan jarak (KM) : ");
  scanf("%f",&s_isi);
  printf("Masukkan waktu (S)  : ");
  scanf("%f",&t_isi);
  
  v=kecepatan(s_isi,t_isi);

  printf("\nKecepatan= %.2f KM/Jam\n\n",v);
    
  return 0;
}
