#include <stdio.h>
#include <stdlib.h>
#include "operator.h"


/*
Pointeur:variable contenenant l'adresse memoire d'une autre variable

monPointeur:adresse de la variable pointée
*monPointeur:valeur de la variable pointée
&monPointeur: adresse du pointeur


*/


void inverser(int *pt_a, int *pt_b){
    int tmp=0;

    tmp=*pt_b;

    *pt_b=*pt_a;
    *pt_a=tmp;

    }

int main (){

//recuperer();

//int res=vAbs(-100,-800); genere une erreur car static

/* int res=division(10,5);

printf("adresse res = %p \n", &res);
 */


int a=5;
int b=7;

int *pointeur_a=&a;
int *pointeur_b=&b;

printf("a = %d et b= %d \n", a, b);
inverser(pointeur_a, pointeur_b);
printf("a = %d et b= %d \n", a, b);

return 0;

}
