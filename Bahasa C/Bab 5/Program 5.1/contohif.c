//Program 5.1
//Nama File: contohif.c
//Program contoh kasus percabangan C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int umur;
  printf("Umur anda: ");scanf("%i",&umur);
  if(umur<17)
    printf("Tidak boleh punya SIM.\n\n");
    
  return 0;
}
