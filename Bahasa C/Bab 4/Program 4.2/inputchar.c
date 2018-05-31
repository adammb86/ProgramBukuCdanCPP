//Program 4.2
//Nama File: inputchar.c
//Program input character C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char k1,k2;
  printf("Masukkan karakter pertama : ");
  k1=getch();printf("\n");
  printf("Masukkan karakter kedua   : ");
  k2=getche();printf("\n");
  printf("%c dan %c\n\n",k1,k2);
    
  return 0;
}
