//Program 11.3
//Nama File: pointervoid.c
//Program pointer tidak bertipe C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void *p;
  int x;
  float y;
  printf("Masukkan nilai x : ");
  scanf("%i",&x);
  printf("Masukkan nilai y : ");
  scanf("%f",&y);
  p=&x;
  printf("\n");
  printf("Nilai x= %i\n",*(int *)p);
  printf("Alamat x= 0x%p\n\n",(int *)p);
  p=&y;
  printf("Nilai y= %f\n",*(float *)p);
  printf("Alamat y= 0x%p\n\n",(float *)p);
    
  return 0;
}
