//Program 6.12
//Nama File: contohcontinue.c
//Program contoh penggunaan continue C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int bil;
  for(bil=1;bil<=5;bil++)
  {
    printf("%i\n",bil);
    continue;
    printf("Diskriminasi! Saya tak muncul!");
  }
    
  return 0;
}
