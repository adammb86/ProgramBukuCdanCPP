//Program 4.1
//Nama File: contohio.c
//Program contoh input dan output C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x,jam,menit,detik;
  unsigned int y;
  float z;
  char nama[31];
  scanf("%i",&x);
  scanf("%u",&y);
  scanf("%f",&z);
  scanf("%i %i %i",&jam,&menit,&detik);
  fflush(stdin);scanf("%s",nama);
    
  return 0;
}
