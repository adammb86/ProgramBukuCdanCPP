//Program 6.13
//Nama File: conioulang.cpp
//Program contoh perulangan conio  C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for(i=2;i<=12;i++)
    {
        gotoxy(9,i);
        textbackground(LIGHTGREEN);
        cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
        gotoxy(25,i);
        textbackground(YELLOW);
        cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
        gotoxy(41,i);
        textbackground(LIGHTBLUE);
        cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
        gotoxy(57,i);
        textbackground(LIGHTMAGENTA);
        cout<<"               ";
    }
    textbackground(WHITE);
    cout<<endl<<endl<<endl;
    
    return EXIT_SUCCESS;
}
