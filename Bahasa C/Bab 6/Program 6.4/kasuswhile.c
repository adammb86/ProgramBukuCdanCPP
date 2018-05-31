//Program 6.4
//Nama File: kasuswhile.c
//Program perulangan while C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int baris,kolom;
  printf("Masukkan jumlah baris : ");
  scanf("%i",&baris);
  while(baris>=1)
  {
    kolom=1;
    
    while(kolom<=baris)
    {
      printf("%2i ",baris*kolom);
      kolom++;
    }
    
    printf("\n");
    baris--;
  }
  printf("\n");          
    
  return 0;
}
