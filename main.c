#include <stdio.h>
#include <stdlib.h>
#include "operator.h"


/*
Pointeur:variable contenenant l'adresse memoire d'une autre variable

monPointeur:adresse de la variable pointé
*monPointeur:valeur de la variable
&monPointeur: adresse du pointeur


*/


void inverser(int a, int b){
    int tmp=b;
    b=a;
    a=tmp;

    }

int main (){

//recuperer();

//int res=vAbs(-100,-800); genere une erreur car static

/* int res=division(10,5);

printf("adresse res = %p \n", &res);
 */


int a=5;
int b=7;

printf("a = %d et b= %d", a, b);
inverser(a, b);
printf("a = %d et b= %d", a, b);

return 0;

}
