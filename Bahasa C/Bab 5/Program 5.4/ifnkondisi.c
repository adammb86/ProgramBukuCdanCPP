//Program 5.4
//Nama File: ifnkondisi.c
//Program contoh kasus percabangan n kondisi C

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  int pilihan;

  textbackground(WHITE);
  clrscr();
  textcolor(BLACK);
  printf("Pilihan Warna Lampu Lalu Lintas\n");
  printf("-------------------------------\n");
  textcolor(LIGHTRED);
  printf("1. Merah\n");
  textcolor(YELLOW);
  printf("2. Kuning\n");
  textcolor(LIGHTGREEN);
  printf("3. Hijau\n");
  textcolor(BLACK);
  printf("-------------------------------\n\n");
  
  textcolor(BLACK);
  printf("Pilihan anda [1..3]: ");
  scanf("%i",&pilihan);
  printf("\n");

  //kondisi untuk kasus lampu lalu lintas
  if(pilihan==1)
  {

    textcolor(LIGHTRED);
    printf("Lampu merah, tidak boleh jalan!");
  } 

  else 
  if(pilihan==2)
  {

    textcolor(YELLOW);         
    printf("Lampu kuning, siap-siap!");
  }
  else 
  if(pilihan==3)
  {

    textcolor(LIGHTGREEN);         
    printf("Lampu hijau,boleh jalan!");
  }

  else
    printf("Pilihan salah!");

  printf("\n\n");
    
  return 0;
}
