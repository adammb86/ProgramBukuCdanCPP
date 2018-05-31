//Program 11.1
//Nama File: cobapointer.cpp
//Program percobaan pointer C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x=5;
    float y=10.5;
    cout<<"Isi variabel x    : "
        <<x<<endl;
    cout<<"Alamat variabel x : "
        <<&x<<endl<<endl;
    cout<<"Isi variabel y    : "
        <<y<<endl;
    cout<<"Alamat variabel y : "
        <<&y<<endl<<endl;
    
    return EXIT_SUCCESS;
}
