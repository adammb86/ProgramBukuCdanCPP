//Program 10.2
//Nama File: panjangstring.c
//Program fungsi panjang string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  int panjang;
  printf("Masukkan suatu string  : ");
  fflush(stdin);gets(string);
  panjang=strlen(string);
  printf("String yang dimasukkan= %s\n"
          ,string);
  printf("Panjang string         = %i\n\n"
          ,panjang);    
  return 0;
}
