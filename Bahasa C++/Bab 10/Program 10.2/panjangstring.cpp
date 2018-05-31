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
//Program 10.2
//Nama File: panjangstring.cpp
//Program fungsi panjang string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    int panjang;
    cout<<"Masukkan suatu string  : ";
    fflush(stdin);cin.get(string,30);
    panjang=strlen(string);
    cout<<"String yang dimasukkan = "
        <<string<<endl;
    cout<<"Panjang string         = "
        <<panjang<<endl<<endl;
    
    return EXIT_SUCCESS;
}
