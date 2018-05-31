//Program 11.7
//Nama File: pointertopointer.c
//Program pointer to pointer C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x=10;
  int *px1;
  int **px2;
  px1=&x;
  px2=&px1;
  printf("Hasil menggunakan 1 pointer\n");
  printf("Nilai x    = %i\n",*px1);
  printf("Alamat x   = %p\n",px1);
  printf("Alamat px1 = %p\n\n",&px1);

  printf("Hasil menggunakan pointer ke pointer\n");
  printf("Nilai x    = %i\n",**px2);
  printf("Alamat x   = %p\n",*px2);
  printf("Alamat px1 = %p\n\n",px2);
    
  return 0;
}
