//Program 7.6
//Nama File: parametermasukan.cpp
//Program contoh parameter masukan C++


#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

float kecepatan(float s, float t)
{
  float v;
  v=s/t;
  return v;
}

int main(int argc, char *argv[])
{
  float s_isi,t_isi,v;
  cout<<"Masukkan jarak (KM) : ";
  cin>>s_isi;
  cout<<"Masukkan waktu (S)  : ";
  cin>>t_isi;
  
  v=kecepatan(s_isi,t_isi);

  cout<<endl;
  cout<<setiosflags(ios::fixed);
  cout<<"Kecepatan= "<<setprecision(2)
      <<v<<" KM/Jam"<<endl<<endl;
    
  return 0;
}
