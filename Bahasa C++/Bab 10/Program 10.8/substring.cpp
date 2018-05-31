//Program 10.8
//Nama File: substring.cpp
//Program fungsi sub string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    char substring[15];
    char *pstring;
    cout<<"Masukkan string    : ";
    fflush(stdin);cin.get(string,30);
    cout<<"Masukkan substring : ";
    fflush(stdin);cin.get(substring,14);
    pstring=strstr(string,substring);
    cout<<"Sub string         = "
        <<pstring<<endl;
    cout<<"Posisi sub string  = "
        <<(pstring-string)+1
        <<endl<<endl;
    
    return EXIT_SUCCESS;
}
