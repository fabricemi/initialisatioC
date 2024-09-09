#include <stdio.h>
#include <stdlib.h>


int somme(int a, int b);
int mul(int a, int b);
int vAbs(int a, int b);
int mod(int a, int b);
float division(int a, int b);
int main (){

int a=0;
int b=0;

printf("saisir a :");
scanf("%d", &a);
printf("saisir b :");
scanf("%d", &b);

printf("A + B= %d ", somme(a, b));
printf("|A - B|= %d ", vAbs(a, b));
printf("A * B= %d ", mul(a, b));
printf("A / B= %.2f ", division(a, b));
printf("A mod B= %d ", mod(a, b));


return 0;

}

int somme(int a, int b){

return a+b;
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
