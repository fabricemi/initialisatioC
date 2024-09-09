#include <stdio.h>
#include <stdlib.h>
#include "operator.h"



int main (){

recuperer();

//int res=vAbs(-100,-800); genere une erreur car static

int res=division(10,5);

printf("res = %d \n", res);

return 0;

}
