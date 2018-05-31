//Program 12.3
//Nama File: bacatulisfile.cpp
//Program baca tulis file C++

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream filetulis;
    ifstream filebaca;
    char string[255];

    //buka file
    filetulis.open("string.txt",ios::in);
    
    //proses tulis dan baca data
    if(!filetulis)
    {
      cout<<"File gagal dibuat!"<<endl;
      return 1;
    }      
    else
    {
      printf("Masukkan string: ");
      fflush(stdin);cin.getline(string,255);
        
      filetulis<<string<<endl;
      filetulis.close();

      filebaca.open("string.txt",ios::out);

      
      filebaca>>string;
      cout<<string<<endl;
      
      filebaca.close();
    }
    
    return EXIT_SUCCESS;
}
