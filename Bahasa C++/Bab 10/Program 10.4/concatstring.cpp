//Program 10.4
//Nama File: concatstring.cpp
//Program fungsi penggabungan string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string1[]="Kita sedang belajar";
    char string2[]=" fungsi string bersama!";
    char string3[50];
    strcpy(string3,string1);
    cout<<"Hasil penggabungan strcat  = "
        <<strcat(string3,string2)<<endl;
    cout<<"Hasil penggabungan strncat = "
        <<strncat(string3,string2,14)
        <<endl<<endl;
    
    return EXIT_SUCCESS;
}
