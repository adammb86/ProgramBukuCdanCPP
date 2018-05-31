//Program 8.5
//Nama File: arraysatudimensi.c
//Program array satu dimensi C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float nilai[10];
  int x,y;

  printf("Mau berapa data [1..10]: ");
  scanf("%i",&y);

  for(x=0;x<y;x++)
  {
    printf("Nilai ke-%i : ",x+1);
    scanf("%f",&nilai[x]);
  }
  printf("\n");

  for(x=0;x<y;x++)
  {
    printf("Nilai ke-%i : %.2f\n",x+1,nilai[x]);
  }
  printf("\n");
    
  return 0;
}
