//Program 7.4
//Nama File: fungsibalikstring.c
//Program fungsi dengan nilai balik string  C

#include <stdio.h>
#include <stdlib.h>

char *nama()
{
   return "Fungsi string dipanggil!";
}

int main(int argc, char *argv[])
{
  printf("%s\n\n",nama());
    
  return 0;
}
