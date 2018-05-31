//Program 8.8
//Nama File: arraystring.cpp
//Program array dua dimensi untuk string C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char hari[7][10];
    int i;
    for(i=0;i<7;i++)
    {
      cout<<"Hari ke-"<<i+1<<" : ";
      cin>>hari[i];
    }
    cout<<endl;

    for(i=0;i<7;i++)
    {
      cout<<"Hari ke-"<<i+1<<" : "
          <<hari[i]<<endl;
    }
    cout<<endl<<endl;
    
    return EXIT_SUCCESS;
}
