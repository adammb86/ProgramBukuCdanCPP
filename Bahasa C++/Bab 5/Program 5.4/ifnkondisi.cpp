//Program 5.4
//Nama File: ifnkondisi.cpp
//Program contoh kasus percabangan n kondisi C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    int pilihan;

    textbackground(WHITE);
    clrscr();
    textcolor(BLACK);
    cout<<"Pilihan Warna Lampu Lalu Lintas"
        <<endl;
    cout<<"-------------------------------"
        <<endl;
    textcolor(LIGHTRED);
    cout<<"1. Merah"<<endl;
    textcolor(YELLOW);
    cout<<"2. Kuning"<<endl;
    textcolor(LIGHTGREEN);
    cout<<"3. Hijau"<<endl;
    textcolor(BLACK);
    cout<<"------------------------------"
        <<endl<<endl;
    textcolor(BLACK);
    cout<<"Pilihan anda [1..3]: ";
    cin>>pilihan;
    cout<<endl;

    //kondisi kasus lampu lalu lintas
    if(pilihan==1)
    {
        textcolor(LIGHTRED);
        cout<<"Lampu merah, tidak boleh jalan!";
    } 
    else 
    if(pilihan==2)
    {
         textcolor(YELLOW);         
         cout<<"Lampu kuning, siap-siap!";
    }
    else 
    if(pilihan==3)
    {
         textcolor(LIGHTGREEN);         
         cout<<"Lampu hijau, boleh jalan!";
    }
    else
         cout<<"Pilihan salah!";

    cout<<endl<<endl;
    
    return EXIT_SUCCESS;
}
