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

case 2: {
    if (count == 0) {
        printf("aucune tache afficher.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d | %s | %s | %s | %s\n", taches[i].id, taches[i].titre, taches[i].description, taches[i].deadline, taches[i].statut);
        }
    }
    break;
}

case 3: {
    if (count == 0) {
        printf("aucune tache modifier.\n");
    } else {
        int id;
        printf("antrez id de la tache a modifier: ");
        scanf("%d", &id);
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (taches[i].id == id) {
                printf("entrez la nouvelle description: ");
                scanf(" %[^\n]", taches[i].description);
                printf("entrez le nouveau deadline: ");
                scanf(" %[^\n]", taches[i].deadline);
                printf("entrez le nouveau statut: ");
                scanf(" %[^\n]", taches[i].statut);
                printf("Teche modifie bien\n");
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Tache introuvable.\n");
        }
    }
    break;
}

case 4: {
    if (count == 0) {
        printf("aucune tache a supprimer.\n");
    } else {
        int id;
        printf("entrez id de la tache a supprimer: ");
        scanf("%d", &id);
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (taches[i].id == id) {
                for (int j = i; j < count - 1; j++) {
                    taches[j] = taches[j + 1];
                }
                count--;
                printf("Tache supprime avec succes!\n");
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("tache introuvable.\n");
        }
    }
    break;
}


case 5: {
    if (count == 0) {
        printf("aucune tache  rechercher.\n");
    } else {
        int recherche_choix;
        printf("Rechercher par: 1 : id ## 2 ; titre: ");
        scanf("%d", &recherche_choix);
        if (recherche_choix == 1) {
            int id;
            printf("entrez id: ");
            scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (taches[i].id == id) {
                    printf("Tache trouve: %d | %s | %s | %s | %s\n", taches[i].id, taches[i].titre, taches[i].description, taches[i].deadline, taches[i].statut);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("tache introuvable.\n");
            }
        } else if (recherche_choix == 2) {
            char titre[100];
            printf("Entrez le titre: ");
            scanf(" %[^\n]", titre);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(taches[i].titre, titre) == 0) {
                    printf("Tâche trouvée: %d | %s | %s | %s | %s\n", taches[i].id, taches[i].titre, taches[i].description, taches[i].deadline, taches[i].statut);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("tache introuvable.\n");
            }
        } else {
            printf("Choix invalide.\n");
        }
    }
    break;
}




case 7: {
                printf("Exiting program...\n");
                break;
            }

            default:
                printf("Choix invalide. Veuillez essayer à nouveau.\n");
                break;
        }

    } while (choix != 7);

    return 0;
}




return 0;
}