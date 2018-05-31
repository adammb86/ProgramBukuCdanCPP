//Program 5.1
//Nama File: contohif.cpp
//Program contoh kasus percabangan C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int umur;
    cout<<"Umur anda: ";
    cin>>umur;
    if(umur<17)
        cout<<"Tidak boleh punya SIM."
            <<endl<<endl;
    
    return EXIT_SUCCESS;
}
