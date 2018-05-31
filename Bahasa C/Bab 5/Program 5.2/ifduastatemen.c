//Program 5.2
//Nama File: ifduastatemen.c
//Program contoh kasus percabangan dua statement C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float IP;
  printf("IP anda: ");scanf("%f",&IP);
  if(IP>=3.5)
  {
       printf("\nIP anda %.2f\n",IP);
       printf("Anda cum laude!\n\n");
  }

    
  return 0;
}
