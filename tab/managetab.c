#include <stdio.h>
#include "managetab.h"
#define TAILLE_TAB 6


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

int getMin(int tab[]){
 int c=tab[0];
 int *p_c=&c;
    int i;

     for (i=0; i<TAILLE_TAB; i++){
        if(c>=tab[i]){
            *p_c=tab[i];
        }
        
    }

return *p_c;
}

int getMax(int tab[]){
    int max=tab[0];
    int *p_max=&max;
    int i;

     for (i=0; i<TAILLE_TAB; i++){
        if(max<=tab[i]){
            *p_max=tab[i];
        }
        
    }

return *p_max;

}


int *inverser(int tab []){

    static int res[TAILLE_TAB]={};
    int i;
    int j=0;

    for (i=TAILLE_TAB-1; i>=0; i--){
        res[j]=tab[i];
        j++;
    }

    return res;

}

