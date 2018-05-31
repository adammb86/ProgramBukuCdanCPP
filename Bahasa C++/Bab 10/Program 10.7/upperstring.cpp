//Program 10.7
//Nama File: upperstring.cpp
//Program fungsi upper case string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    cout<<"Masukkan string: ";
    fflush(stdin);cin.get(string,30);
    strupr(string);
    cout<<"String setelah strupr= "
        <<string<<endl<<endl;
    
    return EXIT_SUCCESS;
}
