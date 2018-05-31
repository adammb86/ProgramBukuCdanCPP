//Program 5.2
//Nama File: ifduastatemen.cpp
//Program contoh kasus percabangan dua statement C++

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    float IP;
    cout<<"Berapa IP anda : ";
    cin>>IP;
    if(IP>=3.5)
    {    
        //supaya tidak dibulatkan   
        cout<<setiosflags(ios::fixed);  
        cout<<"\nIP anda "<<setprecision(2)
            <<IP<<endl;
        cout<<"Anda cum laude!"<<endl<<endl;
    }


    return EXIT_SUCCESS;
}
