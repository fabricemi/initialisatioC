#include <stdio.h>
#include "managetab.h"
#define TAILLE_TAB 10


int *allMulValueBy(int tab [], int mul){

    static int  res[TAILLE_TAB+1];
    int i;
    for(i=0; i<TAILLE_TAB; i++){
      res[i]=tab[i]*mul;
    }
    res[10]=10;
    return res;

}



int isPresent(int tab [], int value){

    int nbrOcc=0;

    int i;

    for (i=0; i<TAILLE_TAB+1; i++){
        if(tab[i]==value){
            nbrOcc++;
        }
    }

    printf("nbrOccu = %d \n ", nbrOcc);

    return (nbrOcc>0)?1:0;

}

