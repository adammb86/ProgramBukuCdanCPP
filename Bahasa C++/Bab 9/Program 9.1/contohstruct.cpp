//Program 9.1
//Nama File: contohstruct.cpp
//Program contoh penggunaan struct C++

#include <cstdlib>
#include <iostream>

using namespace std;

//deklarasi struct
typedef struct 
{
    long int nip;
    char nama[31];
    char alamat[51];
}data_dosen;

//deklarasi variabel struct
data_dosen dosen1,dosen2;

int main(int argc, char *argv[])
{
    //input           
    cout<<"Data Dosen Pertama\n";
    cout<<"------------------\n";
    cout<<"NIP    : ";cin>>dosen1.nip;
    cout<<"Nama   : ";fflush(stdin);
    cin.get(dosen1.nama,30);
    cout<<"Alamat : ";fflush(stdin);
    cin.get(dosen1.alamat,50);
    cout<<endl<<endl;
    
    cout<<"Data Dosen Kedua\n";
    cout<<"------------------\n";
    cout<<"NIP    : ";cin>>dosen2.nip;
    cout<<"Nama   : ";fflush(stdin);
    cin.get(dosen2.nama,30);
    cout<<"Alamat : ";fflush(stdin);
    cin.get(dosen2.alamat,50);
    cout<<endl<<endl;
    
    //output
    cout<<"Data Dosen Pertama\n";
    cout<<"------------------\n";
    cout<<"NIP    : "<<dosen1.nip<<endl;
    cout<<"Nama   : "<<dosen1.nama<<endl;
    cout<<"Alamat : "<<dosen1.alamat<<endl;
    cout<<endl<<endl;
    
    cout<<"Data Dosen Kedua\n";
    cout<<"------------------\n";
    cout<<"NIP    : "<<dosen2.nip<<endl;
    cout<<"Nama   : "<<dosen2.nama<<endl;
    cout<<"Alamat : "<<dosen2.alamat<<endl;
    cout<<endl<<endl;          
    
    return EXIT_SUCCESS;
}
