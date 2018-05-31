//Program 8.5
//Nama File: arraysatudimensi.cpp
//Program array satu dimensi C++

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    float nilai[10];
    int x,y;
    cout<<"Mau berapa data [1..10]: ";
    cin>>y;
    for(x=0;x<y;x++)
    {
       cout<<"Nilai ke-"<<x+1<<" : ";
       cin>>nilai[x];
    }
    cout<<endl;
    cout<<setiosflags(ios::fixed);

    for(x=0;x<y;x++)
    {
        cout<<"Nilai ke-"
            <<setprecision(2)<<x+1<<" : "
            <<nilai[x]<<endl;
    }
    cout<<endl;

    return EXIT_SUCCESS;
}
