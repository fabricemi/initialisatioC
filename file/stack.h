typedef struct Element{
    int value;
   struct Element *next;
} Element, *Stack;

typedef enum Bool{
    false,
    true
} Bool;

Stack initStack();
Stack empiler(Element *pile, int val);

void freeStaclAlloc(Stack stack);



int pop(Stack stack);
int size(Stack stack);
Bool estVide(Stack stack);
Stack queue(Stack stack);
Stack videPile(Element *element);


