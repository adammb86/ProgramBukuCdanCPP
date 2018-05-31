//Program 7.3
//Nama File: contohvoid.cpp
//Program contoh penggunaan void  C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

void Kotak(int X1,int Y1, int X2,int Y2,
           int Bingkai,int Latar)
{
    int i;
    textcolor(Bingkai);
    textbackground(Latar);

    //untuk simbol Ú cari di 
    //simbol M.Word dengan Character Code 218  
    //from ASCII(Decimal) lalu copy-kan 
    gotoxy(X1,Y1);cout<<"Ú";

    gotoxy(X1,Y2);cout<<"\xC0";
    gotoxy(X2,Y1);cout<<"\xBF";
    gotoxy(X2,Y2);cout<<"\xD9";

    for (i=X1+1;i<=X2-1;i++)
    {
         gotoxy(i,Y1);cout<<"\xC4";
         gotoxy(i,Y2);cout<<"\xC4";
    }
  
    for(i=Y1+1;i<=Y2-1;i++)
    {
         gotoxy(X1,i);cout<<"\xB3";
         gotoxy(X2,i);cout<<"\xB3";
    }
}

int main(int argc, char *argv[])
{
    //warna background
    textbackground(WHITE);
    clrscr();           
    Kotak(1,1,80,24,WHITE,BLUE);
    Kotak(2,2,15,23,WHITE,RED);
    textbackground(WHITE);
    textcolor(BLACK);
    gotoxy(1,25);
             
    return EXIT_SUCCESS;
}
