//Program 10.4
//Nama File: concatstring.c
//Program fungsi penggabungan string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string1[]="Kita sedang belajar";
  char string2[]=" fungsi string bersama!";
  char string3[100];
  strcpy(string3,string1);
  printf("Hasil penggabungan strcat  = %s\n"
          ,strcat(string3,string2));
  printf("Hasil penggabungan strncat = %s\n\n"
          ,strncat(string3,string2,14));
    
  return 0;
}
