//Program 10.7
//Nama File: upperstring.c
//Program fungsi upper case string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  printf("Masukkan string: ");
  fflush(stdin);gets(string);
  strupr(string);
  printf("String setelah strupr= %s\n\n",string);
    
  return 0;
}
