#include <stdio.h>
#include "managetab.h"
#define TAILLE_TAB 6


int main(){

    int a[TAILLE_TAB]={};


    int i;

    for (i=0; i<TAILLE_TAB;i++){
        a[i]=i+1;
    }
    int value=100;

    int *res=allMulValueBy(a, 10);
    for (i=0; i<TAILLE_TAB+1;i++){
        printf(" %d \n", res[i]);
    }
    int isP=isPresent(res, value);


(isP==1)?printf("res contain  %d \n", value):printf("res do not contain  %d \n", value);
   
   int test[TAILLE_TAB]={1,2,3, 4, 5,6};
   printf("min= %d \n", getMin(test));
   printf("max= %d \n", getMax(test));

printf("************* \n");

 for (i=0; i<TAILLE_TAB;i++){
        printf(" %d \n", test[i]);
    }

   int *inverse=inverser(test);
printf("************* \n");
 for (i=0; i<TAILLE_TAB;i++){
        printf(" %d \n", inverse[i]);
    }

    return 0;
}



