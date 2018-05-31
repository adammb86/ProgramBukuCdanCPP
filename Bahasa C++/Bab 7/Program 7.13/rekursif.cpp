//Program 7.13
//Nama File: rekursif.cpp
//Program contoh fungsi rekursif C++

#include <cstdlib>
#include <iostream>

using namespace std;

int pangkat(int x,int y);

int pangkat(int x,int y)
{
  if(y==1)
  {
    return x;
  }
  else
  {
    //rekursi fungsi
    return (x*pangkat(x,y-1)); 
  }
}

int main(int argc, char *argv[])
{
    int a,b;  
    cout<<"x  : ";cin>>a;
    cout<<"y  : ";cin>>b;
    cout<<"x pangkat y = "
        <<pangkat(a,b)<<endl<<endl;
    
    return EXIT_SUCCESS;
}
