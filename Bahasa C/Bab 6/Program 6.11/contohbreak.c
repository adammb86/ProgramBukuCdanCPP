//Program 6.11
//Nama File: contohbreak.c
//Program contoh penggunaan break C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j;
  
  printf("Masukkan banyak perulangan : ");
  scanf("%i",&j);
  
  for(i=1;i<=j;i++)
  {
    printf("%i\n",i);
    if(i==(j-3))
        break;
  }
  printf("\ni terakhir (break=banyak-3)= %i\n\n",i);
    
  return 0;
}
