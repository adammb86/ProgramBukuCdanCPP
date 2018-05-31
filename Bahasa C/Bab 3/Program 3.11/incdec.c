//Program 3.11
//Nama File: incdec.c
//Program contoh operasi increment decrement C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x=10;
  int y=100;
  printf("x awal                : %i\n\n",x);
  x++;
  printf("x++ di luar printf    : %i\n",x);
  printf("x                     : %i\n\n",x);
  printf("x++ di dalam printf   : %i\n",x++);
  printf("x                     : %i\n\n",x);
  ++x;
  printf("++x di luar printf    : %i\n",x);
  printf("x                     : %i\n\n",x);
  printf("++x di dalam printf   : %i\n",++x);
  printf("x terakhir            : %i\n\n\n",x); 
  printf("y awal                : %i\n\n",y);
  y--; 
  printf("y-- di luar printf    : %i\n",y);
  printf("y                     : %i\n\n",x); 
  printf("y-- di dalam printf   : %i\n",y--);
  printf("y                     : %i\n\n",y);
  --y;
  printf("++y di luar printf    : %i\n",y);
  printf("y                     : %i\n\n",y);
  printf("--y di dalam printf   : %i\n",--y);
  printf("y terakhir            : %i\n\n\n",y);
    
  return 0;
}
