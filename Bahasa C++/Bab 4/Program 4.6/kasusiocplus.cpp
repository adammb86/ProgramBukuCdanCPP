//Program 4.6
//Nama File: kasusiocplus.cpp
//Program contoh kasus input output C++

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int jam_lembur;
    long int gaji_pokok=1000000;
    long int gaji_kotor, total_gaji_lembur;
    float pajak,gaji_bersih;
    char nama[31];

    system("clear");

    cout<<"Nama Pegawai     : ";fflush(stdin);
    cin.get(nama,30);
    cout<<"Lama Lembur      : ";cin>>jam_lembur;
    total_gaji_lembur=(long int)5000*jam_lembur; 
    gaji_kotor=gaji_pokok+total_gaji_lembur;
    pajak=0.1*gaji_kotor;
    gaji_bersih=gaji_kotor-pajak;
    cout<<endl;
    cout<<"Hasil Perhitungan"<<endl;
    cout<<"Nama Pegawai             : "<<nama<<endl;
    cout<<"Gaji Pokok               : "
        <<gaji_pokok<<endl;
    cout<<"Lama Lembur              : "<<jam_lembur
        <<" jam"<<endl;
    cout<<"Total Gaji Lembur        : Rp. "
        <<setw(10)<<total_gaji_lembur<<endl;
    cout<<"Gaji Kotor               : Rp. "
        <<setw(10)<<gaji_kotor<<endl;
    cout<<setiosflags(ios::fixed); 
    //mengatur bilangan pecahan
    cout<<"Pajak (10%)              : Rp. "
        <<setw(10)<<setprecision(2)<<pajak<<endl;
    cout<<"Gaji Bersih              : Rp. "
        <<setw(10)<<setprecision(2)<<gaji_bersih
        <<endl<<endl;
    
    return EXIT_SUCCESS;
}
