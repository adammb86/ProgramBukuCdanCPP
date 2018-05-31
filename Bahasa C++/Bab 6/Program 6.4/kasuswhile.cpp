//Program 6.4
//Nama File: kasuswhile.cpp
//Program perulangan while C++

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int baris,kolom;
    cout<<"Masukkan jumlah baris : ";cin>>baris;
    while(baris>=1)
    {
        kolom=1;
        
        while(kolom<=baris)
        {
            cout<<setw(2)<<baris*kolom<<" ";
            kolom++;
        }
         
        cout<<endl;
        baris--;
    }
    cout<<endl;          
    
    return EXIT_SUCCESS;
}
