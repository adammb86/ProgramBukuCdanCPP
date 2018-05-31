//Program 7.8
//Nama File: parameterio.c
//Program contoh parameter input/output C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pangkat_dua(float *bil)
{
  *bil=pow(*bil,2);
}

int main(int argc, char *argv[])
{
  float bilangan;
  printf("Masukkan bilangan : ");
  scanf("%f",&bilangan);
  pangkat_dua(&bilangan);
  printf("pangkat dua= %.0f\n\n",bilangan);
    
  return 0;
}
