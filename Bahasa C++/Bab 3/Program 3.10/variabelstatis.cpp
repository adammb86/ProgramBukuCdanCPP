//Program 3.10
//Nama File: variabelstatis.cpp
//Program contoh variabel statis C++

#include <cstdlib>
#include <iostream>

using namespace std;

void contoh_biasa()
{
     int x=0;
     x=x+1;
     cout<<"x biasa  = "<<x<<endl;
}

void contoh_statis()
{
     static int x=0;
     x=x+1;
     cout<<"x statis = "<<x<<endl;
}

int main(int argc, char *argv[])
{
    contoh_biasa();
    contoh_biasa();
    contoh_biasa();
    cout<<"\n\n";
    contoh_statis();
    contoh_statis();
    contoh_statis();
    cout<<"\n";
    
    return EXIT_SUCCESS;
}
