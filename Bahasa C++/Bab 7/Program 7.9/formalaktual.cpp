//Program 7.9
//Nama File: formalaktual.cpp
//Program contoh parameter formal aktual C++

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//bil di sini parameter formal
float akar_pangkat(int bil)
{
    return (sqrt(bil));
}

int main(int argc, char *argv[])
{
    int bil;           
    cout<<"Masukkan bilangan : ";cin>>bil;
    cout<<setiosflags(ios::fixed);
    cout<<"Akar pangkat dua  = "
        <<setprecision(2)
        //bil di sini parameter aktual
        <<akar_pangkat(bil)<<endl<<endl;
                 
    return EXIT_SUCCESS;
}
