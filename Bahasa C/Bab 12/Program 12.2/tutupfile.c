//Program 12.2
//Nama File: tutupfile.c
//Program tutup file C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{   
    //pointer file
    FILE *file;
    

    //buka file dalam mode read
    file=fopen("string.txt","r");
    if(file!=NULL)
        printf("File berhasil dibuka\n");
    else
        printf("File tidak ditemukan\n");

    //tutup file
    fclose(file);

    return 0;
}
