#include <stdio.h>
#include "operator.h"

#define show printf


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

static int vAbs(int a, int b){
    int res=a-b;
return (res>0)?res:-1*(res);
}

float division(int a, int b){
return a/b;}

int mod(int a, int b){
    return a%b;
}


void afficher(int a, int b){
show("A + B= %d \n", somme(a, b));
show("|A - B|= %d \n", vAbs(a, b));
show("A * B= %d \n", mul(a, b));
show("A / B= %.2f \n", division(a, b));
show("A mod B= %d \n", mod(a, b));
}
