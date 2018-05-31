//Program 7.2
//Nama File: voidparameter.cpp
//Program void menggunakan parameter  C++

#include <cstdlib>
#include <iostream>

using namespace std;

void tampil_nama(int nim,char nama[31],char alamat[51])
{
    cout<<"NIM anda         = "
        <<nim<<endl<<"\a";
    cout<<"Nama anda        = "
        <<nama<<endl<<"\a";
    cout<<"Alamat anda      = "
        <<alamat<<endl<<endl<<"\a";
}

int main(int argc, char *argv[])
{
    int nim_isi;
    char nama_isi[31],alamat_isi[51];

    cout<<"Masukkan NIM     : ";
    cin>>nim_isi;
    cout<<"Masukkan Nama    : ";fflush(stdin);
    cin.get(nama_isi,30);
    cout<<"Masukkan Alamat  : ";fflush(stdin);
    cin.get(alamat_isi,50);
    cout<<endl;
    tampil_nama(nim_isi,nama_isi,alamat_isi);         
    
    return EXIT_SUCCESS;
}
