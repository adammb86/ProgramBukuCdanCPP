//Program 3.7
//Nama File: contohstring.c
//Program pengisian tipe string C

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
    char nama[31]; 
    char pekerjaan[21]; 

    printf("Nama      : ");
    fgets(nama,30,stdin);
    printf("Pekerjaan : ");
    fgets(pekerjaan,20,stdin);
    printf("\nData yang telah dimasukan adalah : \n");
    printf("Nama      : %s",nama);
    printf("Pekerjaan : %s\n",pekerjaan);
        
    return 0;
}
