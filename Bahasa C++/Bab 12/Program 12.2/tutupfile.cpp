//Program 12.2
//Nama File: tutupfile.cpp
//Program tutup file C++

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{   
    ofstream file;
    
    //buka file
    file.open("string.txt");

    //tutup file
    file.close();
    
    return EXIT_SUCCESS;
}
