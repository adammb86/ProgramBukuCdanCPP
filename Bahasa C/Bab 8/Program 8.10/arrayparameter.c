//Program 8.10
//Nama File: arrayparameter.c
//Program array sebagai parameter fungsi C

#include <stdio.h>
#include <stdlib.h>

void input_array(int bil[],int banyak_data)
{
  int i;   
  for(i=0;i<banyak_data;i++)
  {
    printf("Nilai bil[%i] : ",i+1);
    scanf("%i",&bil[i]);
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
  int bil[100];//maksimal elemen
  int banyak_data;
  int jumlah;
  printf("Mau berapa elemen : ");
  scanf("%i",&banyak_data);
  printf("\n");
  
  //memanggil void input_array
  input_array(bil,banyak_data);
  
  //memanggil fungsi jumlah_elemen
  jumlah=jumlah_elemen(bil,banyak_data);
  
  printf("\n");
  printf("Hasil penjumlahan = %i\n\n",jumlah);
    
  return 0;
}
