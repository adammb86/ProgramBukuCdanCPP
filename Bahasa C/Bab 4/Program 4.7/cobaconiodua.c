//Program 4.7
//Nama File: cobaconiodua.c
//Program contoh kasus conio2.h C

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h> //file header tambahan

int main(int argc, char *argv[])
{
  //memberi background pada teks dan layar   
  textbackground(WHITE);

  //pengganti system("cls");
  clrscr(); 

  //warna harus dalam huruf besar  
  textcolor(GREEN); 
  printf("Tulisan ini berwarna hijau tua\n");
  textcolor(LIGHTBLUE);//tidak semua warna bisa
  printf("Tulisan ini berwarna biru terang\n");
  textcolor(RED);
  printf("Tulisan ini berwarna merah\n");

  //bisa diganti dengan angka karena
  //parameter fungsi ini bertipe integer
  textcolor(10); 
  textbackground(BLACK);
  printf("Tulisan ini berwarna hijau muda dan berlatar hitam\n\n");
  textcolor(BLACK);
  textbackground(WHITE);

  //mengatur letak dengan aturan 
  //gotoxy(kolom,baris)
  gotoxy(25,10); 
    
  return 0;
}
