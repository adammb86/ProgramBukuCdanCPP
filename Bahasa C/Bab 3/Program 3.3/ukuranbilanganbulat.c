//Program 3.3
//Nama File: ukuranbilanganbulat.c
//Program ukuran tipe bilangan bulat C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("int: %lu\n",sizeof(int));
  printf("unsigned int: %lu\n",sizeof(unsigned int));
  printf("signed int: %lu\n",sizeof(signed int));
  printf("short int: %lu\n",sizeof(short int));
  printf("unsigned short int: %lu\n",sizeof(unsigned short int));
  printf("signed short int   : %lu\n",sizeof(signed short int));
  printf("long int           : %lu\n",sizeof(long int));
  printf("signed long int    : %lu\n",sizeof(signed long int));
  printf("unsigned long int  : %lu\n\n",sizeof(unsigned long int));
  
  return 0;
}
