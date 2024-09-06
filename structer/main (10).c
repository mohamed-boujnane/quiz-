#include <stdio.h>

typedef struct {
    char* nom;
    char* prenom;
    int age;
} Personne;

int main() {
    Personne p1;
    p1.nom = "mohamed";
    p1.prenom = "boujnane";
    p1.age = 26;
    printf("Nom : %s\nPrenom : %s\nAge : %d", p1.nom, p1.prenom, p1.age);

    return 0;
}