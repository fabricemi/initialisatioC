#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main(){

   Stack pile=initStack();

   printf("size : %d \n", size(pile));
    if(estVide(pile)==true)
    {
        printf("La pile est vide \n");
    }

    pile=empiler(pile, 10);
     pile=empiler(pile, 11);
 printf("size : %d \n", size(pile));
    pile=queue(pile);
    printf("size après avoir recuper la queue : %d \n", size(pile));
     if(estVide(pile)==false)
    {
        printf("La pile est pas  vide \n");
    }
    printf("sommet : %d \n", pop(pile));
    printf("size : %d \n", size(pile));

    pile=empiler(pile, 13);
     printf("size : %d \n", size(pile));

      pile=empiler(pile, 14);
      pile=empiler(pile, 15);
      pile=empiler(pile, 16);
      printf("size : %d \n", size(pile));

      pile=queue(pile);
       printf("size après avoir recuper la queue : %d \n", size(pile));

  /*   if(pile==NULL)
    {
        printf("La pile est vide \n");
    } */

   printf("pile vidé \n");
   pile=videPile(pile);
     printf("size : %d \n", size(pile));
    freeStaclAlloc(pile);
    return 0;
}