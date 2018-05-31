//Program 8.7
//Nama File: matriks.cpp
//Program array dua dimensi 
//dalam bentuk matriks C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    //matriks 3 baris 3 kolom
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;

    //input
    cout<<"Matriks pertama"<<endl;
    cout<<"---------------";
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        gotoxy(j*5+1,i+3);
        cin>>a[i][j];
      }
    }
    cout<<endl;

    cout<<"Matriks kedua"<<endl;
    cout<<"-------------";
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        gotoxy(j*5+1,i+9);
        cin>>b[i][j];
      }
    }

    //proses
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          c[i][j]=a[i][j]+b[i][j];
      }
    }

    //output
    system("cls");
    cout<<"Matriks Hasil"<<endl;
    cout<<"-------------";
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        gotoxy(j*5+1,i+3);
        cout<<c[i][j];
      }
    }
    cout<<endl<<endl;
    
    return EXIT_SUCCESS;
}
