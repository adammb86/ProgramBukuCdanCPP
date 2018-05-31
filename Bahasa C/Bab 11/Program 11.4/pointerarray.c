//Program 11.4
//Nama File: pointerarray.c
//Program pointer dan array C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int bil_bulat[]={0,1,2,3,4};
  int *pbil,i;
  
  //penugasan array
  pbil=bil_bulat;
  for(i=0;i<5;i++)
  {
    printf("Nilai yang ditunjuk  [%i] : %i\n",
            i+1,*pbil);
    printf("Alamat yang ditunjuk [%i] : 0x%p\n\n",
            i+1,pbil);
    pbil++;
  }
    
  return 0;
}
