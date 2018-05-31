//Program 4.7
//Nama File: cobaconiodua.cpp
//Program contoh kasus conio2.h C++ 

#include <cstdlib>
#include <iostream>
#include <conio2.h> //file header tambahan

using namespace std;

int main(int argc, char *argv[])
{
    //memberi background pada teks dan layar
    textbackground(WHITE); 

    clrscr(); //pengganti system("cls");

    textcolor(GREEN); //warna harus dalam huruf besar
    cout<<"Tulisan ini berwarna hijau tua"<<endl;
    textcolor(LIGHTBLUE);//tidak semua warna bisa
    cout<<"Tulisan ini berwarna biru terang"<<endl;
    textcolor(RED);
    cout<<"Tulisan ini berwarna merah"<<endl;
    //bisa diganti dengan angka karena 
    //parameter fungsi ini bertipe integer
    textcolor(10); 
    textbackground(BLACK);
    cout<<"Tulisan ini akan berwarna hijau muda dan berlatar hitam"
        <<endl<<endl;
    textcolor(BLACK);
    textbackground(WHITE);
    //mengatur letak dengan aturan 
    //gotoxy(kolom,baris)
    gotoxy(25,10); 
    
    return EXIT_SUCCESS;
}
