//Program 12.3
//Nama File: bacatulisfile.c
//Program baca tulis file C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *file;//pointer file
  char string[255];
  
  //Buka File
  file=fopen("string.txt","a+");
  
  //proses output data ke file
  if(file!=NULL)
  {
    
    printf("Masukkan string: ");
    fflush(stdin);gets(string);
      
    fprintf(file,"%s\n",string);
  
    rewind(file);
    fread(string,255,255,file);
    printf("%s\n",string);
  
    //tutup file
    fclose(file);
    printf("File telah selesai di buat!\n\n");
  }
  else
    printf("File gagal dibuat\n\n");
      
  return 0;
}
