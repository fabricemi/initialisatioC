
#include <stdio.h>
#include <stdlib.h>
#include "fic.h"



void readLines(FILE *file){
      signed char line[256];
     // printf(" %c", fgetc(fic));
      while((fgets(line, 255, file))!=NULL){
           printf("%s \n",line);
     }
}

void readCharByChar(FILE *file){
      int lettre;
     // printf(" %c", fgetc(fic));
      while((lettre=fgetc(file))!=EOF){
           printf("%c",lettre);
     }
     printf("\n");
}

void encadreur(TL typelecture){
   FILE *fic=fopen("fic.txt", "r");

     if(fic==NULL){
          printf("%s \n","error");
          exit(1);
     }
     if(typelecture==1){
          readCharByChar(fic);
     }
     else{
          readLines(fic);
     }
     

     fclose(fic);
}

