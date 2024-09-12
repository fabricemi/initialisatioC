typedef enum TL{
     BY_LINE=0,
     BY_CHAR=1,
     WRITE=3
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


void useFscanf(FILE *file);
void filtre(FILE *file, int age_limit);

void ecrire(FILE *file);
