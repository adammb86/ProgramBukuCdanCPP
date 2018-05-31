//Program 10.5
//Nama File: comparestring.cpp
//Program fungsi perbandingan isi string C++

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string1[]="ABCD";
    char string2[]="ABCD";
    char string3[]="abcd";
    int banding;
    banding=strcmp(string1,string2);
    cout<<"Hasil strcmp : "<<endl;
    if(banding==0)
      cout<<string1<<" sama dengan "
          <<string2<<endl;
    else
    if(banding>0)
      cout<<string1<<" lebih besar dibanding "
          <<string2<<endl;
    else
      cout<<string1<<" lebih kecil dibanding "
          <<string2<<endl;
    cout<<endl;   
    banding=strncmp(string1,string3,2);
    cout<<"Hasil strncmp dua karakter: "<<endl;
    if(banding==0)
      cout<<string1<<" sama dengan "
          <<string3<<endl;
    else
    if(banding>0)
      cout<<string1<<" lebih besar dibanding "
          <<string3<<endl;
    else
      cout<<string1<<" lebih kecil dibanding "
          <<string3<<endl;
    cout<<endl;
    banding=strcmpi(string1,string3);
    cout<<"Hasil strcmpi : "<<endl;
    if(banding==0)
      cout<<string1<<" sama dengan "
          <<string3<<endl;
    else
    if(banding>0)
      cout<<string1<<" lebih besar dibanding "
          <<string3<<endl;
    else
      cout<<string1<<" lebih kecil dibanding "
          <<string3<<endl;
    cout<<endl;
    banding=strnicmp(string1,string3,2);
    cout<<"Hasil strnicmp dua karakter: "<<endl;
    if(banding==0)
      cout<<string1<<" sama dengan "
          <<string3<<endl;
    else
    if(banding>0)
      cout<<string1<<" lebih besar dibanding "
          <<string3<<endl;
    else
      cout<<string1<<" lebih kecil dibanding "
          <<string3<<endl;
    cout<<endl;
    
    return EXIT_SUCCESS;
}
