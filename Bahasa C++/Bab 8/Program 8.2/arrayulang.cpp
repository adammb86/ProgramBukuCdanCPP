//Program 8.2
//Nama File: arrayulang.cpp
//Program contoh array dengan pengulangan C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x[5],i;
    for(i=0;i<=4;i++)
    {
        cout<<"Masukkan nilai "<<i+1
            <<": ";cin>>x[i];
    }
    cout<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<"Nilai ke-"<<i+1
            <<"= "<<x[i]<<endl;
    }
    cout<<endl;
    
    return EXIT_SUCCESS;
}
