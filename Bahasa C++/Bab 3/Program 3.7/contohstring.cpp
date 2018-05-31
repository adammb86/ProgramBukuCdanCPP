//Program 3.7
//Nama File: contohstring.cpp
//Program pengisian tipe string C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama[31];
    char pekerjaan[21];
    cout<<"Nama       : ";cin.get(nama,30);
    cout<<"Pekerjaan  : ";cin>>pekerjaan;
    cout<<endl;
    cout<<"Data yang telah dimasukan adalah : "
        <<endl;
    cout<<"Nama       : "<<nama<<endl;
    cout<<"Pekerjaan  : "<<pekerjaan<<endl;
    cout<<endl;
    
    return EXIT_SUCCESS;
}
