//Program 11.4
//Nama File: pointerarray.cpp
//Program pointer dan array C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int bil_bulat[]={0,1,2,3,4};
    int *pbil,i;
    //penugasan array
    pbil=bil_bulat;
    for(i=0;i<5;i++)
    {
      cout<<"Nilai yang ditunjuk  ["<<i+1<<"] : "
          <<*pbil<<endl;
      cout<<"Alamat yang ditunjuk ["<<i+1<<"] : "
          <<pbil<<endl<<endl;
      pbil++;
    }
    
    return EXIT_SUCCESS;
}
