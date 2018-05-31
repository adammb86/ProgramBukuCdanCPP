//Program 6.8
//Nama File: loginwhile.cpp
//Program login menggunakan while C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

#define pass 1234
using namespace std;

int main(int argc, char *argv[])
{
    int password,i;
    i=1;
    cout<<"Masukkan password yang benar : ";
    cin>>password;
    while((password!=pass)&&(i!=3))
    {
        cout<<"Password anda salah!"
            <<endl<<endl;
        getch();
        gotoxy(1,2);
        
        //menghapus satu baris dimulai dari pointer
        clreol();
        gotoxy(32,1);clreol();
        scanf("%i",&password);
        i++;
    }
    
    return EXIT_SUCCESS;
}
