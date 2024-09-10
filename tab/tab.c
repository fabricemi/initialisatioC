#include <stdio.h>
#include "managetab.h"
#define TAILLE_TAB 10


int main(){

    int a[TAILLE_TAB]={};


    int i;

    for (i=0; i<TAILLE_TAB;i++){
        a[i]=i+1;
    }
    int value=10;

    int *res=allMulValueBy(a, 10);
    for (i=0; i<TAILLE_TAB+1;i++){
        printf(" %d \n", res[i]);
    }
    int isP=isPresent(res, value);


(isP==1)?printf("res contain  %d \n", value):printf("res do not contain  %d \n", value);
   
    return 0;
}



