typedef enum TL{
     BY_LINE=0,
     BY_CHAR=1
} TL;


/**
Lis un fichier, lettre par lettre
 */
void readCharByChar(FILE *file);


/**
Lis un fichier line par ligne
 */
 void readLines(FILE *file);


void encadreur(TL typelecture);

