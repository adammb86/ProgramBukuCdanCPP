//Program 10.12
//Nama File: stringparameterdua.cpp
//Program string sebagai parameter fungsi C++
//cara kedua

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void nama_barang(char kode_barang[],char *nama_brg)
{
  if(strcmpi(kode_barang,"B001")==0)
     strcpy(nama_brg,"Kemeja");
  else
  if(strcmpi(kode_barang,"B002")==0)
     strcpy(nama_brg,"Kaos");
  else
     strcpy(nama_brg,"Jas");
}

int main(int argc, char *argv[])
{
    char kode_barang[6];
    char nama_brg[7];
    cout<<"Masukkan kode barang : ";
    fflush(stdin);cin.get(kode_barang,6);
    nama_barang(kode_barang,nama_brg);
    cout<<"Nama barang= "<<nama_brg
        <<endl<<endl;          
    
    return EXIT_SUCCESS;
}
