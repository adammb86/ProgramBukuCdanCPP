//Program 5.5
//Nama File: ifbanyakkasus.c
//Program contoh kasus percabangan banyak kasus C

#include <stdio.h>
#include <stdlib.h>

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
  printf("Menu Makanan\n");
  printf("---------------------------------\n");
  printf("1. Cap Cay Goreng\n");
  printf("2. Kakap Asam Manis\n");
  printf("3. Puyung Hay\n");
  printf("---------------------------------\n");
  printf("Masukkan pilihan makanan : ");
  scanf("%i",&menu);
  printf("\n");
  printf("Pilihan Porsi\n");
  printf("---------------------------------\n");
  printf("1. Kecil\n");
  printf("2. Sedang\n");
  printf("3. Besar\n");
  printf("---------------------------------\n");
  printf("Masukkan pilihan porsi  : ");
  scanf("%i",&porsi);
  printf("\n");
  printf("Masukkan banyak pesanan : ");
  scanf("%i",&banyak_pesanan);
  printf("\nStatus Pesanan\n");
  printf("---------------------------------\n");
  printf("1. Makan Ditempat\n");
  printf("2. Dibungkus\n");
  printf("---------------------------------\n");
  printf("Masukkan status pesanan : ");
  scanf("%i",&status_pesanan);
  
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
  printf("Hasil Perhitungan\n");
  printf("-----------------------------------------\n");
  printf("Diskon            : Rp. %10.2f\n",diskon);
  printf("Total harga       : Rp. %10.2f\n",total_harga_awal);
  printf("Pajak             : Rp. %10.2f\n",pajak);
  printf("Bayar             : Rp. %10.2f\n",total_harga_akhir);
  printf("-----------------------------------------\n");
    
  return 0;
}
