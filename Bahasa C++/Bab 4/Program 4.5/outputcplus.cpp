//Program 4.5
//Nama File: outputcplus.cpp
//Program output C++

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int x=25000;
    unsigned int y=5000;
    float z=12345.678;
    char univ[35]="UNIVERSITAS KOMPUTER INDONESIA";
    char kota[10]="BANDUNG";

    //untuk mengosongkan layar
    //untuk gcc gunakan system("clear");
    system("cls");

    cout<<"Tampilan Data Tanpa Diformat"<<endl;
    cout<<"Nilai x :"<<x<<endl;
    cout<<"Nilai y :"<<y<<endl;
    cout<<"Nilai z :"<<z<<endl;
    cout<<"String  :"<<univ<<" "<<kota<<"\n\n";
    cout<<"Tampilan Data Sudah Diformat"<<endl;
    cout<<"Nilai x :"<<setw(10)<<x<<endl;
    cout<<"Nilai y :"<<setw(10)<<y<<endl;
    cout<<"Nilai z :"<<setw(10)<<z<<endl;
    cout<<"String 1:"<<setw(40)<<univ
        <<" "<<setw(10)<<kota<<endl;
    cout<<"String 2:"<<setw(-40)<<univ<<" "
        <<setw(-10)<<kota<<"\n\n";

    return EXIT_SUCCESS;
}
