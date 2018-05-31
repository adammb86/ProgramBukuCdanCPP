//Program 11.7
//Nama File: pointertopointer.cpp
//Program pointer to pointer C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x=10;
    int *px1;
    int **px2;
    px1=&x;
    px2=&px1;
    cout<<"Hasil menggunakan 1 pointer"
        <<endl;
    cout<<"Nilai x    = "
        <<*px1<<endl;
    cout<<"Alamat x   = "
        <<px1<<endl;
    cout<<"Alamat px1 = "
        <<&px1<<endl<<endl;
    
      cout<<"Hasil menggunakan pointer ke pointer"
        <<endl;
    cout<<"Nilai x    = "
        <<**px2<<endl;
    cout<<"Alamat x   = "
        <<*px2<<endl;
    cout<<"Alamat px1 = "
        <<px2<<endl<<endl;
    
    return EXIT_SUCCESS;
}
