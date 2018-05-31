//Program 6.11
//Nama File: contohbreak.cpp
//Program contoh penggunaan break C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j;
    
    cout<<"Masukkan banyak perulangan : ";
    cin>>j;
    
    for(i=1;i<=j;i++)
    {
       cout<<i<<endl;
       if(i==(j-3))
        break;
    }
    cout<<endl;
    cout<<"i terakhir (break=banyak-3) = "<<i
        <<endl<<endl;
    
    return EXIT_SUCCESS;
}
