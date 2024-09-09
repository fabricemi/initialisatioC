#include <stdio.h>
#include <stdlib.h>


int somme(int a, int b);

int main (){

int a=0;
int b=0;

printf("saisir a :");
scanf("%d", &a);
printf("saisir b :");
scanf("%d", &b);

printf("res= %d \n", somme(a, b));


return 0;

}

int somme(int a, int b){

return a+b;
}


