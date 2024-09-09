#include <stdio.h>
#include <stdlib.h>


int somme(int a, int b);

int main (){

int res=somme(10,15);

printf("res %d \n", res);
return 0;

}


int somme(int a, int b){

return a+b;
}
