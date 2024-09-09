#include <stdio.h>
#include "operator.h"


int somme(int a, int b){

return a+b;
}

void recuperer(){
int a=0;
int b=0;

printf("saisir a :");
scanf("%d", &a);
printf("saisir b :");
scanf("%d", &b);

afficher(a, b);
}

int mul(int a, int b){
return a*b;
}

int vAbs(int a, int b){
    int res=a-b;
return (res>0)?res:-1*(res);
}

float division(int a, int b){
return a/b;}

int mod(int a, int b){
    return a%b;
}


void afficher(int a, int b){
printf("A + B= %d \n", somme(a, b));
printf("|A - B|= %d \n", vAbs(a, b));
printf("A * B= %d \n", mul(a, b));
printf("A / B= %.2f \n", division(a, b));
printf("A mod B= %d \n", mod(a, b));
}
