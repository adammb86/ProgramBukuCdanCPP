//Program 6.3
//Nama File: forderet.cpp
//Program perulangan for untuk deret C++


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j,jumlah;
    jumlah=0;
    cout<<"Masukkan bilangan : ";cin>>j;
    cout<<endl;
    cout<<"Jumlah deret      = ";
    for(i=1;i<=j;i++)
    {
         jumlah=jumlah+i;
         cout<<i<<" ";
         if(i<j)
              cout<<"+ ";
    }
    cout<<endl;
    cout<<" = "<<jumlah<<endl<<endl;
    
    return EXIT_SUCCESS;
}
