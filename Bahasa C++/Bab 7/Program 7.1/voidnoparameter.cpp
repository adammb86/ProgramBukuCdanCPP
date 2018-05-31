//Program 7.1
//Nama File: voidnoparameter.cpp
//Program void tanpa parameter  C++

#include <cstdlib>
#include <iostream>

using namespace std;

void tampil_nama()
{
    int nim;
    char nama[31],alamat[51];
    cout<<"Masukkan NIM     : ";cin>>nim;
    cout<<"Masukkan Nama    : ";fflush(stdin);
    cin.get(nama,30);
    cout<<"Masukkan Alamat  : ";fflush(stdin);
    cin.get(alamat,50);
    cout<<endl;
    cout<<"NIM anda         = "<<nim
        <<endl<<"\a";
    cout<<"Nama anda        = "<<nama
        <<endl<<"\a";
    cout<<"Alamat anda      = "<<alamat
        <<endl<<endl<<"\a";
}

int main(int argc, char *argv[])
{
    tampil_nama();         
    
    return EXIT_SUCCESS;
}
