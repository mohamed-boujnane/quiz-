#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100

typedef struct {
    char nom[50];
    char telephone[20];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int nombreContacts = 0;

void ajouterContact() {
    if (nombreContacts >= MAX_CONTACTS) {
        printf(" contacts plein!\n");
        return;
    }
    
    Contact nouveauContact;
    
    printf("Entrez le nom: ");
    scanf("%s", nouveauContact.nom);
    printf("Entrez le numéro de téléphone: ");
    scanf("%s", nouveauContact.telephone);
    printf("Entrez l'adresse e-mail: ");
    scanf("%s", nouveauContact.email);
    
    contacts[nombreContacts] = nouveauContact;
    nombreContacts++;
    
    printf("Contact ajouté avec succès!\n");
}

void modifierContact() {
    char nomRecherche[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nomRecherche);
    
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nomRecherche) == 0)
        {
            printf("entrez le nouveau numero de telephone: ");
            scanf("%s", contacts[i].telephone);
            printf("entrez la nouvelle adresse email: ");
            scanf("%s", contacts[i].email);
            printf("Contact modifie avec succes!\n");
            return;
        }
    }
    printf("contact non trouve.\n");
}

void supprimerContact() {
    char nomRecherche[50];
    printf("entrez le nom du contact à supprimer: ");
    scanf("%s", nomRecherche);
    
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nomRecherche) == 0) {
            for (int j = i; j < nombreContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            nombreContacts--;
            printf("Contact supprime avec succes!\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void afficherContacts() {
    if (nombreContacts == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }
    
    printf("Liste des contacts:\n");
    for (int i = 0; i < nombreContacts; i++) {
        printf("Nom: %s\n", contacts[i].nom);
        printf("Téléphone: %s\n", contacts[i].telephone);
        printf("Email: %s\n", contacts[i].email);
        printf("--------------------\n");
    }
}

void rechercherContact() {
    char nomRecherche[50];
    printf("entrez le nom du contact a rechercher: ");
    scanf("%s", nomRecherche);
    
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nomRecherche) == 0) {
            printf("Contact trouvé!\n");
            printf("Nom: %s\n", contacts[i].nom);
            printf("Téléphone: %s\n", contacts[i].telephone);
            printf("Email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

int main() {
    int choix;
    
    do {
        printf(" # Système de Gestion de Contacts \n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                modifierContact();
                break;
            case 3:
                supprimerContact();
                break;
            case 4:
                afficherContacts();
                break;
            case 5:
                rechercherContact();
                break;
            case 6:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide. Veuillez réessayer.\n");
        }
    } while (choix != 6);
    
    return 0;
}