//Program 5.3
//Nama File: ifduakondisi.cpp
//Program contoh kasus percabangan dua kondisi C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int bil;
    cout<<"Bilangan Bulat: ";
    cin>>bil;
    if(bil>=0)
    {

        cout<<"\nBilangan= "
            <<bil<<endl;
        cout<<"Ini bilangan positif"
            <<endl<<endl;
    }

    else
    {
         cout<<"\nBilangan= "
             <<bil<<endl;
         cout<<"Ini bilangan negatif"
             <<endl<<endl;
    }     

    return EXIT_SUCCESS;
}
