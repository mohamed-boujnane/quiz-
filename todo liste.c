#include <stdio.h>

typedef struct  {

    int id;
    char titre[100];
    char description [1000];
    char deadline [100];
    char statut [100];
}Tache;

Tache taches[1000];
int count = 0;



int main() {

    int choix;
  do {  
    printf("#### menu principal \n####");
    printf("1 :ajouter un nouvelle tache :");
    printf("2: modifier une tache");
    printf("3: supprimer une tache par identifiant");
    printf("4: rechercher les taches");
    printf("5: afficher stasistique");
    printf("6 : sortie en programme ");
    scanf("%d",choix);

  }
  switch (choix) {
case 1: {
int id;
char titre[100];
char description [100];
char deadline [10];
char status [100];

printf("entre id :");
scanf("%[^\n]",&id);

printf("le titre :");
scanf("%[^\n]",titre);
    
printf("descreption :");
scanf("%[^\n]",descreption);

printf("deadline :");
scanf("%[^\n]",deadline);

printf("status :");
scanf("%[^\n]",status);

Tache T = {
   id,
   titre,
   descreption,
   deadline,
   status
};
  taches [count] = T;
  count++;
  printf ("### tache ajoute avec succes ###\n")
}break ;
    

    return 0;
}