//Program 8.8
//Nama File: arraystring.c
//Program array dua dimensi untuk string C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char hari[7][10];
  int i;
  for(i=0;i<7;i++)
  {
    printf("Hari ke-%i : ",i+1);
    fgets(hari[i],9,stdin);
  }
  printf("\n");

  for(i=0;i<7;i++)
  {
     printf("Hari ke-%i : %s\n",i+1,hari[i]);
  }
  printf("\n\n");
    
  return 0;
}
