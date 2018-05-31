//Program 6.7
//Nama File: contohdowhile.c
//Program login menggunakan do while C

#include <stdio.h>
#include <stdlib.h>

#define pass 1234

int main(int argc, char *argv[])
{
  int password,i;
  i=0;
  
  do
  {
    printf("Masukkan password: ");
    scanf("%i",&password);
    if(password==pass)
        printf("Password anda benar!\n");
    else
    {
        printf("Password anda salah\n");
        getchar();
    }
    
    i++;
  }while((password!=pass)&&(i!=3));
    
  return 0;
}
