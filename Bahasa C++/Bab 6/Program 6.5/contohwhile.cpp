//Program 6.5
//Nama File: contohwhile.cpp
//Program hitung rata-rata while C++

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int jml_data;
    float nilai,rata2,jml_nilai;
    jml_data=0;
    jml_nilai=0;
    cout<<"Masukkan nilai : ";
    cin>>nilai;
    
    while((nilai>=0)&&(nilai<=100))
    {
        jml_data=jml_data+1;
        jml_nilai=jml_nilai+nilai;
        cout<<"Masukkan nilai : ";
        cin>>nilai;
    }
    
    if(jml_data!=0)
    {
        rata2=jml_nilai/jml_data;
        cout<<endl;
        cout<<setiosflags(ios::fixed);
        cout<<"Rata-rata      = "
            <<setprecision(2)<<rata2
            <<endl<<endl;
    }
    else
    {
         cout<<endl;
         cout<<"Tidak ada data inputan!"
             <<endl<<endl;
    }
    
    return EXIT_SUCCESS;
}
