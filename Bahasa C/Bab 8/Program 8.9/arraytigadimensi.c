//Program 8.9
//Nama File: arraytigadimensi.c
//Program array tiga dimensi C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nama[2][2][10];
  int i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       printf("Nama[%i][%i] : ",i+1,j+1);
       fflush(stdin);
       get(nama);
    }
     printf("\n");
  }
  
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
        printf("Nama[%i][%i] : %s\n",i+1,j+1,
                nama[i][j]);
     }
  }
  printf("\n");
    
  return 0;
}
