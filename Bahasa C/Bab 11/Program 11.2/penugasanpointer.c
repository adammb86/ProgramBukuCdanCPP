//Program 11.2
//Nama File: penugasanpointer.c
//Program penugasan pointer C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int v;
  int *pv;
  printf("Masukkan nilai v : ");
  scanf("%i",&v);
  printf("\n");
  
  //penugasan pointer
  pv=&v;
  printf("Hasil tanpa pointer:\n");
  printf("Nilai v   : %i\n",v);
  printf("Alamat v  : 0x%p\n\n",&v);
  printf("Hasil tanpa pointer:\n");
  printf("Nilai v   : %i\n",*pv);
  printf("Alamat v  : 0x%p\n\n",pv);
    
  return 0;
}
