//Program 11.6
//Nama File: pointerstring.cpp
//Program pointer to string C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char *pstring="UNIKOM";
    cout<<"Nilai string  = "
        <<pstring<<endl;
    cout<<"Alamat string = "
        <<&pstring<<endl<<endl;
    
    return EXIT_SUCCESS;
}
