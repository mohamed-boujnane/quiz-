#include <stdio.h>
#include <string.h>

#define MAX_TACHES 1000

typedef struct {
    int id;
    char titre[100];
    char description[1000];
    char deadline[100];
    char statut[50];
} Tache;

Tache taches[MAX_TACHES];
int count = 0;

int main() {
    int choix;
    do {
        printf("\n #### menu principal ####\n");
        printf("1: ajouter une nouvelle tache\n");
        printf("2: afficher toutes les taches\n");
        printf("3: Modifier une tache\n");
        printf("4: Supprimer une tache\n");
        printf("5: Rechercher une tache\n");
        printf("6: afficher statistiques\n");
        printf("7: quitter\n");
        printf("entrez votre choix: ");
        scanf("%d", &choix);
}


  case 1: {
    int n;
    printf("Combien de taches vous ajouter? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        Tache t;
        t.id = count + 1;
        printf("entrez le titre: ");
        scanf(" %[^\n]", t.titre);
        printf("entrez la description: ");
        scanf(" %[^\n]", t.description);
        printf("entrez le deadline: ");
        scanf(" %[^\n]", t.deadline);
        printf("entrez le statut : ");
        scanf(" %[^\n]", t.statut);
        taches[count] = t;
        count++;
    }
    break;
}
return 0;
}