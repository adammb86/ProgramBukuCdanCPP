//Program 9.7
//Nama File: structnilaibalik.cpp
//Program struct sebagai nilai balik C++

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct
{
    int tahun;
    int bulan;
    int tanggal;
}data_tanggal;

data_tanggal tanggal_lahir()
{
    data_tanggal tgl;
    tgl.tahun=1986;
    tgl.bulan=6;
    tgl.tanggal=5;
    return tgl;
}

int main(int argc, char *argv[])
{
    data_tanggal tanggal;
    tanggal=tanggal_lahir();           
    cout<<"Tanggal Lahir = "
        <<tanggal.tanggal<<"-"
        <<tanggal.bulan<<"-"
        <<tanggal.tahun<<endl<<endl;
    
    return EXIT_SUCCESS;
}
