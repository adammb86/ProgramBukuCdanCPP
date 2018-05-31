//Program 8.6
//Nama File: arrayduadimensi.cpp
//Program array dua dimensi C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //matriks 2 baris 2 kolom
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;

    //input
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<"a["<<i+1<<"]["<<j+1<<"] : ";
        cin>>a[i][j];
      }
      cout<<endl;
    }
    cout<<endl;

    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<"b["<<i+1<<"]["<<j+1<<"] : ";
        cin>>b[i][j];
      }
      cout<<endl;
    }
    cout<<endl;
    
    //proses
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
      }
    }
    //output
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<"c["<<i+1<<"]["<<j+1<<"] : "
            <<c[i][j]<<endl;
      }
      cout<<endl;
    }
    cout<<endl;
    
    return EXIT_SUCCESS;
}
