//Program 6.13
//Nama File: conioulang.c
//Program contoh perulangan conio  C

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  int i;
  textbackground(WHITE);
  system("cls");
  
  for(i=2;i<=12;i++)
  {
    gotoxy(9,i);
    textbackground(LIGHTGREEN);
    printf("               ");
  }
  
  for(i=2;i<=12;i++)
  {
    gotoxy(25,i);
    textbackground(YELLOW);
    printf("               ");
  }
  
  for(i=2;i<=12;i++)
  {
    gotoxy(41,i);
    textbackground(LIGHTBLUE);
        printf("               ");
  }
  
  for(i=2;i<=12;i++)
  {
    gotoxy(57,i);
    textbackground(LIGHTMAGENTA);
    printf("               ");
  }
  
  textbackground(WHITE);
  printf("\n\n\n");
  
  return 0;
}
