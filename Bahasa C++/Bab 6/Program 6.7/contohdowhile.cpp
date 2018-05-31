//Program 6.7
//Nama File: contohdowhile.cpp
//Program login menggunakan do while C++

#include <cstdlib>
#include <iostream>

#define pass 1234
using namespace std;

int main(int argc, char *argv[])
{
    int password,i;
    i=0;
    
    do
    {
        cout<<"Masukkan password: ";
        cin>>password;
        if(password==pass)
            cout<<"Password anda benar!"
                <<endl;
        else
        {
            cout<<"Password anda salah"
                <<endl;
            getchar();
        }
        i++;
    }while((password!=pass)&&(i!=3));
    
    return EXIT_SUCCESS;
}
