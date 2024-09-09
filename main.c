#include <stdio.h>
#include <stdlib.h>


int somme(int a, int b);
int mul(int a, int b);
int sous(int a, int b);
int mod(int a, int b);
float division(int a, int b);
int main (){

int a=0;
int b=0;

printf("saisir a :");
scanf("%d", &a);
printf("saisir b :");
scanf("%d", &b);

printf("A + B= %d /n", somme(a, b));
printf("A - B= %d /n", sous(a, b));
printf("A * B= %d /n", mul(a, b));
printf("A / B= %f /n", division(a, b));
printf("A mod B= %d /n", mod(a, b));


return 0;

}

int somme(int a, int b){

return a+b;
}

int mul(int a, int b){
return a*b;
}

int sous(int a, int b){
return a-b;
}

float division(int a, int b){
return a/b;}

int mod(int a, int b){
    return a%b;
}
