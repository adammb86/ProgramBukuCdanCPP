//Program 6.12
//Nama File: contohcontinue.cpp
//Program contoh penggunaan continue C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int bil;
    for(bil=1;bil<=5;bil++)
    {
        cout<<bil<<endl;
        continue;
        cout<<"Diskriminasi! Saya tak muncul!";
    }
    
    return EXIT_SUCCESS;
}
