//Program 7.7
//Nama File: parameterkeluaran.cpp
//Program contoh parameter keluaran C++

#include <cstdlib>
#include <iostream>

using namespace std;

void jumlah_deret(int batas, int *jumlah);

void jumlah_deret(int batas,int *jumlah)
{ 
    int x;   
    *jumlah=0;
    for(x=1;x<=batas;x++)
    {    
        *jumlah=*jumlah+x;
    }
}

int main(int argc, char *argv[])
{
    int batas,jumlah;
    cout<<"Masukkan batas deret  : ";
    cin>>batas;
    jumlah_deret(batas,&jumlah);
    cout<<endl;
    cout<<"Jumlah Deret          = "
        <<jumlah<<endl<<endl;
    
    return EXIT_SUCCESS;
}
