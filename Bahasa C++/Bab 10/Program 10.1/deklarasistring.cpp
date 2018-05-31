//Program 10.1
//Nama File: deklarasistring.cpp
//Program deklarasi string C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama1[31];
    char *nama2="Adam MB";
    cout<<"Masukkan nama pertama: ";
    fflush(stdin);cin.get(nama1,30);
    cout<<"Nama pertama= "<<nama1<<endl;
    cout<<"Nama kedua= "
        <<nama2<<endl<<endl;   
    
    return EXIT_SUCCESS;
}
