//Program 7.4
//Nama File: fungsibalikstring.cpp
//Program fungsi dengan nilai balik string  C++

#include <cstdlib>
#include <iostream>

using namespace std;

//untuk C++ menggunakan const
//walaupun tanpa itu bisa berjalan
//akan tetapi ada warning
const char *nama()
{
    return "Fungsi string dipanggil!";
}

int main(int argc, char *argv[])
{
    cout<<nama()<<endl<<endl;         
    
    return EXIT_SUCCESS;
}
