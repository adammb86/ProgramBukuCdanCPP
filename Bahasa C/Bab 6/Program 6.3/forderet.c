//Program 6.3
//Nama File: forderet.c
//Program perulangan for untuk deret C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,jumlah;
  jumlah=0;
  printf("Masukkan bilangan : ");
  scanf("%i",&j);
  printf("\nJumlah deret      = ");
  for(i=1;i<=j;i++)
  {
    jumlah=jumlah+i;
    printf("%i ",i);
    if(i<j)
        printf("+ ");
  }
  printf("\n = %i\n\n",jumlah);
  
  return 0;
}
