#include <stdio.h>

typedef struct {
    char* nom;
    char* prenom;
    int notes[];
} Etudiant;

int main() {
    Etudiant e1 = {
        "mohamed", "boujnane"
    };
    e1.notes[0] = 10;
    e1.notes[1] = 15;
    e1.notes[2] = 11;
    printf("Nom : %s\nPrénom : %s\nNotes : ", e1.nom, e1.prenom);
    for(int i=0; i<3; i++) printf("%d ",e1.notes[i]);

    return 0;
}
