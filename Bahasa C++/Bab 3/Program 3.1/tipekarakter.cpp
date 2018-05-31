//Program 3.1
//Nama File: tipekarakter.cpp
//Program ukuran tipe karakter C++

#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    cout<<"Char: "<<sizeof(char);
    cout<<endl;
    cout<<"Unsigned char: "
        <<sizeof(unsigned char);
    cout<<endl;
    cout<<"Signed char: "<<sizeof(signed char);
    cout<<endl;
    
    return EXIT_SUCCESS;
}
