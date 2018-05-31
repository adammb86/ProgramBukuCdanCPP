//Program 12.1
//Nama File: bukafile.cpp
//Program buka file C++

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{   
    //buka file dalam mode read
    ifstream file;
    file.open("string.txt",ios::in);
    if(file!=NULL)
        cout<<"File berhasil dibuka"
            <<endl;
    else
        cout<<"File tidak ditemukan"
            <<endl;
    
    return 0;
}
