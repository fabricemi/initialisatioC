#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/**
 * ajoute un element au somet de la pile
 * @return Stack la nouvelle pile
 */
Stack empiler(Element *pile, int val){

   Element *stack;
   stack=malloc(sizeof(stack));

    if (stack==NULL)
    {
        printf("ERREUR LORS DE L'ALLOCATION MEMOIRE \n");
        exit(EXIT_FAILURE);
    }

    stack->value=val;
    stack->next=pile;

    return stack;
}

/**
 * initialise une pile vide
 */
Stack initStack(){
    return NULL;
}

void freeStaclAlloc(Stack stack){
      Element *elt;
    if (stack==NULL)
    {
        printf("on y est passé \n");
        return;
    }
  elt=stack->next;

    freeStaclAlloc(elt);
}
/**
 retourne le soumet
 */
int pop(Stack stack){

    int sommet=stack->value;

    stack=stack->next;

    return sommet;
}

/**
 * le nombre d'elements contenu dans la pile
 */
int size(Stack stack){
    static int legth=0;
    int res;
    Element *elt;

    if(stack==NULL){
        res=legth;
        legth=0;
        return res;
    }
    legth++;
    elt=stack->next;

    size(elt);
}


/**
 * test si la pile est vide
 * @return true si la pile est vide
 */
Bool estVide(Stack stack){

    if(stack==NULL){
        return true;
    }
    return false;
}


/**
 * retourn la queu sans le sommet, si la pile est vide : une erreur est affiché. retourne null si la pile contient qu'un seul element
 */
Stack queue(Stack stack){
    if(size(stack)==0){
        fprintf(stderr, "EMPTY STACK \n");
    }
    if(size(stack)==1){
        return NULL;
    }
    return stack->next;
}


Stack videPile(Stack stack){
    Element *elt;
    if(size(stack)){
     
        return NULL;
    }
    elt=stack->next;

    videPile(elt);
}
