//Program 10.3
//Nama File: copystring.c
//Program fungsi copy string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string1[31];
  char string2[31];
  int k;
  printf("Masukkan string: ");
  fflush(stdin);gets(string1);
  printf("Masukkan jumlah karakter salin: ");
  scanf("%i",&k);
  strcpy(string2,string1);
  printf("Hasil penyalinan strcpy  = %s\n"
          ,string2);
  strncpy(string2,string1,k);
  
  //menutup string
  string2[k]='\0';
  printf("Hasil penyalinan strncpy = %s\n\n"
          ,string2);
  
  return 0;
}
