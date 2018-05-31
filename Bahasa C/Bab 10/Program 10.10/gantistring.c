//Program 10.10
//Nama File: gantistring.c
//Program fungsi ganti string C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[]="Saya sedang belajar fungsi string";
  char karakter='A';
  strnset(string,karakter,11);
  printf("String setelah strnset  = %s\n",string);
  strset(string,karakter);
  printf("String setelah strset   = %s\n\n",string);
    
  return 0;
}
