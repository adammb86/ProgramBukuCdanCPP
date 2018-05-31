//Program 6.6
//Nama File: kasusdowhile.cpp
//Program perulangan do while C++

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    int pil;
    int i;
    do
    {
       cout<<" ======================="<<endl;
       cout<<"|          Menu         |"<<endl;
       cout<<" ======================="<<endl;
       cout<<"| 1. Tampilkan Hai      |"<<endl;
       cout<<"| 2. Tampilkan Hoi      |"<<endl;
       cout<<"| 3. Tampilkan Hui      |"<<endl;
       cout<<"| 4. Keluar             |"<<endl;
       cout<<" ======================="<<endl;
       cout<<"| Pilihan [1..4] :      |"<<endl;
       cout<<" ======================="<<endl;
       gotoxy(20,9);cin>>pil;
       gotoxy(3,12);
       switch(pil)
       {
            case 1 :cout<<"Hai"<<endl<<endl;
            break;

            case 2 :cout<<"Hoi"<<endl<<endl;
            break;

            case 3 :cout<<"Hui"<<endl<<endl;
            break;

            case 4 :cout<<"Bye"<<endl<<endl;
            break;

            default:cout<<"Anda salah pilih"
                        <<endl<<endl;
       }
       
       system("cls");
    }while(pil!=4);
    
    return EXIT_SUCCESS;
}
