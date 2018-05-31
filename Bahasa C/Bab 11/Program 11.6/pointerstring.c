//Program 11.6
//Nama File: pointerstring.c
//Program pointer to string C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *pstring="UNIKOM";
  printf("Nilai string  = %s\n",pstring);
  printf("Alamat string = 0x%p\n\n",&pstring);
    
  return 0;
}
