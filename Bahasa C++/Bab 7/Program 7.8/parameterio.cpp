//Program 7.8
//Nama File: parameterio.cpp
//Program contoh parameter input/output C++

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void pangkat_dua(float *bil)
{
    *bil=pow(*bil,2);
}

int main(int argc, char *argv[])
{
    float bilangan;
    cout<<"Masukkan bilangan : ";
    cin>>bilangan;
    pangkat_dua(&bilangan);
    cout<<setiosflags(ios::fixed);
    cout<<"pangkat dua       = "
        <<setprecision(0)
        <<bilangan<<endl<<endl;         
    
    return EXIT_SUCCESS;
}
