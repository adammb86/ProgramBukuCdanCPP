//Program 7.13
//Nama File: rekursif.c
//Program contoh fungsi rekursif C

#include <stdio.h>
#include <stdlib.h>

int pangkat(int x,int y);

int main(int argc, char *argv[])
{
  int a,b;  

  printf("x  : ");
  scanf("%i",&a);
  printf("y  : ");
  scanf("%i",&b);
  printf("x pangkat y = %i\n\n",pangkat(a,b));
    
  return 0;
}

int pangkat(int x,int y)
{
  if(y==1)
  {
    return x;
  }
  else
  {
    return (x*pangkat(x,y-1));
  }
}
