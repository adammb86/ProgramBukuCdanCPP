//Program 8.10
//Nama File: arrayparameter.cpp
//Program array sebagai parameter fungsi C++

#include <cstdlib>
#include <iostream>

using namespace std;

void input_array(int bil[],int banyak_data)
{
    int i;   
    for(i=0;i<banyak_data;i++)
    {
      cout<<"Nilai bil["<<i+1<<"] : ";
      cin>>bil[i];
    }
}

int jumlah_elemen(int bil[],int banyak_data)
{
    int i,jumlah=0;
    for(i=0;i<banyak_data;i++)
    {
       jumlah=jumlah+bil[i];
    }
    return jumlah;     
}     

int main(int argc, char *argv[])
{
    //maksimal elemen
    int bil[100];
    int banyak_data;
    int jumlah;

    cout<<"Mau berapa elemen : ";
    cin>>banyak_data;
    cout<<endl;
  
    //memanggil void input_array
    input_array(bil,banyak_data);
  
    //memanggil fungsi jumlah_elemen
    jumlah=jumlah_elemen(bil,banyak_data);
  
    cout<<endl;
    cout<<"Hasil penjumlahan elemen = "
        <<jumlah<<endl<<endl;         
    
    return EXIT_SUCCESS;
}
