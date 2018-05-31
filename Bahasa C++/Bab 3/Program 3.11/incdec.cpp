//Program 3.11
//Nama File: incdec.cpp
//Program contoh operasi increment decrement C+

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x=10;
    int y=100;
    cout<<"x awal                : "<<x<<endl;
    x++;
    cout<<"x++ di luar cout      : "<<x<<endl;
    cout<<"x                     : "<<x<<endl;
    cout<<"x++ di dalam cout     : "<<x++<<endl;
    cout<<"x                     : "<<x<<endl;
    ++x;
    cout<<"++x di luar cout      : "<<x<<endl;
    cout<<"x                     : "<<x<<endl;
    cout<<"++x di dalam cout     : "<<++x<<endl;
    cout<<"x terakhir            : "<<x<<endl; 
    cout<<"y awal                : "<<y<<endl;
    y--; 
    cout<<"y-- di luar cout      : "<<y<<endl;
    cout<<"y                     : "<<y<<endl;
    cout<<"y-- di dalam cout     : "<<y--<<endl;
    cout<<"y                     : "<<y<<endl;
    --y;
    cout<<"++y di luar cout      : "<<y<<endl;
    cout<<"y                     : "<<y<<endl;
    cout<<"--y di dalam cout     : "<<--y<<endl;
    cout<<"y terakhir            : "<<y<<endl;
    cout<<endl;

    return EXIT_SUCCESS;
}
