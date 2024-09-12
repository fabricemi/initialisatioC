
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

void useFscanf(FILE *file){

    signed char nom[50];
    signed char sexe[2];
    int age=0;

    fscanf(file, "%s %s %d", nom, sexe, &age);
     printf("extrait : %s \n", nom);
    printf("extrait : %s %s %d \n", nom, sexe, age);
}

void filtre(FILE *file, int age_limit){
    signed char n[50];
    signed char s[2];
    int a=0;

    fscanf(file, "%s %s %d", n, s, &a);
     printf("resultat : %s %s %d \n",n, s, a);
    
    /* if(a<=age_limit){
        printf("resultat : %s %s %d \n",n, s, a);
    } */
}

void ecrire(FILE *file){
    char nom[50];
    char sexe[2];
    int age=0;

    printf("Nom?");
    scanf("%s", nom);

    printf("Sexe?");
    scanf("%s", sexe);

    printf("Age?");
    scanf("%d", &age);
     
    fprintf(file, "\n%s %s %d", nom, sexe, age);
    printf("%s %s %d \n", nom, sexe, age);
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
     else if(typelecture==0){
          readLines(fic);
     }
     else if(typelecture==3){
        ecrire(fic);
     }
     else{
        useFscanf(fic);
        //filtre(fic,20);
     }
     

     fclose(fic);
}

