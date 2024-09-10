#include <stdio.h>
#include <string.h>

typedef struct Utilisateur{
    char  nom[20];
    char prenom[20];
    int age;
} User;

void create_user(User *u, char n[] , char  p[], int age){

strcpy(u->nom, n);
strcpy(u->prenom, p);
u->age=age;
}

int main(){

User u={"", "",0};

char nom[20];
char prenom[20];
int age;

printf("Nom ? ");
scanf(" %s", nom);

printf("Prenom ? ");
scanf(" %s", prenom);

printf("age? ");
scanf("%d", &age);

create_user(&u, nom, prenom, age);
printf("Vous êtes  %s %s ,agé de %d ans\n", u.nom, u.prenom, u.age);


return 0;

}