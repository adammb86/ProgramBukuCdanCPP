//Program 5.5
//Nama File: ifbanyakkasus.cpp
//Program contoh kasus percabangan banyak kasus C++

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int menu,porsi,banyak_pesanan;
    int status_pesanan,harga_makanan;
    float pajak,diskon;
    float total_harga_awal,total_harga_akhir;

    //inisialisasi awal
    diskon=0;
    total_harga_awal=0;
    total_harga_akhir=0;

    //input
    cout<<"Menu Makanan"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Cap Cay Goreng"<<endl;
    cout<<"2. Kakap Asam Manis"<<endl;
    cout<<"3. Puyung Hay"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masukkan pilihan makanan : ";
    cin>>menu;
    cout<<endl;
    cout<<"Pilihan Porsi"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Kecil"<<endl;
    cout<<"2. Sedang"<<endl;
    cout<<"3. Besar"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masukkan pilihan porsi  : ";
    cin>>porsi;
    cout<<endl;
    cout<<"Masukkan banyak pesanan : ";
    cin>>banyak_pesanan;
    cout<<endl<<"Status Pesanan"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Makan Ditempat"<<endl;
    cout<<"2. Dibungkus"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masukkan status pesanan : ";
    cin>>status_pesanan;
    
    //proses
    //if model ke-1
    if((menu==1)&&(porsi==1))
        harga_makanan=15000;
    else
    if((menu==1)&&(porsi==2))
        harga_makanan=20000;
    else
    if((menu==1)&&(porsi==3))
        harga_makanan=25000;

    //if model ke-2
    if(menu==2)
    {
        if(porsi==1)
            harga_makanan=30000;
        else if(porsi==2)    
            harga_makanan=40000;
        else
        {
            harga_makanan=50000;
            diskon=0.05*harga_makanan*banyak_pesanan;
        }
    }

    //if dengan gabungan switch (case)
    if(menu==3)
    {
        switch (porsi)
        {
            case 1:harga_makanan=10000;break;
            case 2:harga_makanan=15000;break;
            default:harga_makanan=20000;
        }
    }
    
    total_harga_awal=(harga_makanan*banyak_pesanan)-diskon;

    if (status_pesanan==1)
        pajak=0.1*total_harga_awal;
    else
        pajak=0;

    total_harga_akhir=total_harga_awal+pajak;
    
    //output
    cout<<setiosflags(ios::fixed);
    cout<<"Hasil Perhitungan"<<endl;
    cout<<"-----------------------------------------"
        <<endl;
    cout<<"Diskon            : Rp. "
        <<setprecision(2)<<setw(10)
        <<diskon<<endl;
    cout<<"Total harga       : Rp. "<<setprecision(2)
        <<setw(10)<<total_harga_awal
        <<endl;
    cout<<"Pajak             : Rp. "
        <<setprecision(2)<<setw(10)
        <<pajak<<endl;
    cout<<"Bayar             : Rp. "<<setprecision(2)
        <<setw(10)<<total_harga_akhir
        <<endl;
    cout<<"----------------------------------------"
        <<endl;
    
    return EXIT_SUCCESS;
}
