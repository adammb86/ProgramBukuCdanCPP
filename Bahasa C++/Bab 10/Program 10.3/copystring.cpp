//Program 10.3
//Nama File: copystring.cpp
//Program fungsi copy string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string1[31];
    char string2[31];
    int k;
    cout<<"Masukkan string: ";
    fflush(stdin);cin.get(string1,30);
    cout<<"Masukkan jumlah karakter salin: ";
    cin>>k;
    strcpy(string2,string1);
    cout<<"Hasil penyalinan strcpy  = "
        <<string2<<endl;
    strncpy(string2,string1,k);

    //menutup string
    string2[k]='\0';
    cout<<"Hasil penyalinan strncpy = "
        <<string2<<endl<<endl;
    
    return EXIT_SUCCESS;
}
