//Program 6.8
//Nama File: loginwhile.c
//Program login menggunakan while C

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

#define pass 1234
int main(int argc, char *argv[])
{
  int password,i;
  i=1;
  printf("Masukkan password yang benar : ");
  scanf("%i",&password);
  while((password!=pass)&&(i!=3))
  {
    printf("Password anda salah!\n\n");
    getch();
    gotoxy(1,2);
    
    //menghapus satu baris dimulai dari pointer
    clreol();
    gotoxy(32,1);clreol();
    scanf("%i",&password);
    i++;
  }
    
  return 0;
}
