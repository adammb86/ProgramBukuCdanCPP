//Program 8.4
//Nama File: chararray.cpp
//Program array of characters C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;  
    char nama[5]={'A','d','@','m','\0'};
    char nama2[5]="Ad@m";
    cout<<"Array per karakter = ";
    
    for(i=0;i<=4;i++)
    {
      cout<<nama[i];
    }
    cout<<endl;

    cout<<"Array string= "
        <<nama2<<endl<<endl;
    
    return EXIT_SUCCESS;
}
