//Program 6.6
//Nama File: kasusdowhile.c
//Program perulangan do while C

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  int pil;
  int i;
  
  do
  {
    printf(" =======================\n");
    printf("|          Menu         |\n");
    printf(" =======================\n");
    printf("| 1. Tampilkan Hai      |\n");
    printf("| 2. Tampilkan Hoi      |\n");
    printf("| 3. Tampilkan Hui      |\n");
    printf("| 4. Keluar             |\n");
    printf(" =======================\n");
    printf("| Pilihan [1..4] :      |\n");
    printf(" =======================\n");
    gotoxy(20,9);scanf("%d",&pil);
    gotoxy(3,12);
    
    switch(pil)
    {
        case 1 :printf("Hai\n\n");break;
        case 2 :printf("Hoi\n\n");break;
        case 3 :printf("Hui\n\n");break;
        case 4 :printf("Bye\n\n");break;
        default:printf("Anda salah pilih\n\n");
    }
       
    system("cls");
  }while(pil!=4);
  
  printf("\n\n");
  return 0;
}
