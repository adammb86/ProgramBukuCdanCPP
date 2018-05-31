//Program 10.9
//Nama File: balikstring.cpp
//Program fungsi balik string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    cout<<"Masukkan string: ";
    fflush(stdin);cin.get(string,30);
    strrev(string);
    cout<<"String setelah strrev= "
        <<string<<endl<<endl;
    
    return EXIT_SUCCESS;
}
