#include <stdio.h>


typedef struct {
    int DD;
    int MM;
    int YYYY;
} Date;

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

  switch(choix) {
   
case 1: {
int id;
char titre[100];
char description [100];
char deadline [10];
char status [100];

printf("entre id :");
scanf(" %[^\n]s",&id);

printf("le titre :");
scanf(" %[^\n]",titre);
    
printf("descreption :");
scanf(" %[^\n]",description);

printf("deadline :");
scanf(" %[^\n]",deadline);

printf("status :");
scanf(" %[^\n]",status);

Tache T = {
   id,
   titre,
   description,
   deadline,
   status
};
  taches [count] = T;
  count++;
  printf ("### tache ajoute avec succes ###\n");
} break;


case 2: {
     if(!count) printf("## aucune tach a modifier  ## \n");
 else {
     int choix;
     printf("choisir id du tach a modifier :\n ID ## Titre ## Description ## Deadline ## Statut\n");
         for(int i=0; i<count; i++) {
printf("%d | %s | %s | %s | %s\n", taches[i].id, taches[i].titre, taches[i].description, taches[i].deadline, taches[i].statut);
scanf("%d", &choix);
if(choix>count || choix<0) printf("Choix invalide!");
else {
printf("entre  Nouveau Description :");
scanf(" %[^\n]s", taches[choix].description);
printf("entre Nouveau Deadline : ");
scanf(" %[^\n]s", taches[choix].deadline);
printf("entre  Nouveau Statut : ");
scanf(" %[^\n]s", taches[choix].statut);
printf(" entre tachModifiée avec succès!\n");
                    }
                }
            }; break;

case 3: {
  if(!count) printf("aucun tache modifier \n ");
  else {
    int choix;
    int i;
    printf("choisir id du tache modifier : \n  id  ##  description  ##  deadline  ##   statut  \n");
       for(i=0;  i<count ; i++)  {
    printf("%d ## %s  ## %s ## %s ## %s \n",taches[i].id, taches[i].titre, taches[i].description, taches[i].deadline, taches[i].statut) ;       
       }
    scanf("%d",&choix);
        if(choix > count || choix < 0)printf("choix non valide ");
        else {
            for(int i=0 ; i<count -1 ;i++)
            taches[i] = taches [i+1];
            count--;
            printf("la tache est supprime");
        }

       }  
};break;


case 4 : {
    if(!count) printf("aucune tache \n");

    else {

        int choix;

        printf("recherche par id ou par title : \n  1:par id \n 2:par titre :");
        scanf("%d",&choix);

            if(choix ==1) {
               int id;
               printf("entre id :");
               scanf("%d",&choix);

               if (id > count || id < 0) 
               printf("id non valide");
               else {
                printf ("entre id :");
                scanf ("%d",&id);
               }

            }


    }
}

  }

}
 } while(choix >= 1 && choix <= 5);
    return 0;
}