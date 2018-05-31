//Program 9.3
//Nama File: arrayofstruct.cpp
//Program array of struct C++

#include <cstdlib>
#include <iostream>

//maksimal array
#define maks 100 

using namespace std;

typedef struct
{
  long int nip;
  char nama[31];
  char alamat[51];
}data_dosen;

//array of struct
data_dosen dosen[maks];

int main(int argc, char *argv[])
{
    int i,j;           
    cout<<"Berapa data dosen? ";
    cin>>j;
    cout<<endl;

    for(i=0;i<j;i++)
    {
      cout<<"Data dosen ke-"<<i+1<<endl;
      cout<<"-----------------"<<endl;
      cout<<"NIP    : ";
      cin>>dosen[i].nip;
      cout<<"Nama   : ";fflush(stdin);
      cin.get(dosen[i].nama,30);
      cout<<"Alamat : ";fflush(stdin);
      cin.get(dosen[i].alamat,50);
      cout<<endl<<endl;
    }

    for(i=0;i<j;i++)
    {
      cout<<"Data dosen ke-"<<i+1<<endl;
      cout<<"-----------------"<<endl;
      cout<<"NIP    = "<<dosen[i].nip
          <<endl;
      cout<<"Nama   = "<<dosen[i].nama
          <<endl;
      cout<<"Alamat = "<<dosen[i].alamat
          <<endl;
      cout<<endl<<endl;
    }          
    
    return EXIT_SUCCESS;
}
