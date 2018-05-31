//Program 11.3
//Nama File: pointervoid.cpp
//Program pointer tidak bertipe C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    void *p;
    int x;
    float y;
    cout<<"Masukkan nilai x : ";
    cin>>x;
    cout<<"Masukkan nilai y : ";
    cin>>y;
    p=&x;
    cout<<endl;
    cout<<"Nilai x          = "
        <<*(int *)p<<endl;
    cout<<"Alamat x         = "
        <<(int *)p<<endl<<endl;
    p=&y;
    cout<<"Nilai y          = "
        <<*(float *)p<<endl;
    cout<<"Alamat y         = "
        <<(float *)p<<endl<<endl;
    
    return EXIT_SUCCESS;
}
