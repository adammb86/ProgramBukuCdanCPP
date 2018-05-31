//Program 10.8
//Nama File: substring.c
//Program fungsi sub string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  char substring[15];
  char *pstring;
  printf("Masukkan string    : ");
  fflush(stdin);gets(string);
  printf("Masukkan substring : ");
  fflush(stdin);gets(substring);
  pstring=strstr(string,substring);
  printf("Sub string         = %s\n"
          ,pstring);
  printf("Posisi sub string  = %li\n\n",
          (pstring-string)+1);

  return 0;
}
