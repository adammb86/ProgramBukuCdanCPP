//Program 10.9
//Nama File: balikstring.c
//Program fungsi balik string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  printf("Masukkan string: ");
  fflush(stdin);gets(string);
  strrev(string);
  printf("String setelah strrev= %s\n\n",string);
    
  return 0;
}
