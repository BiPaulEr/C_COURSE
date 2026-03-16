#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[50];
    int* notes;
} Etudiant;
void afficher(Etudiant e);
int main() {
    Etudiant e1;
    strcpy(e1.nom, "Paul");
    e1.notes = malloc(3 * sizeof(int));
    e1.notes[0] = 3;
    e1.notes[1] = 5;
    e1.notes[2] = 8;

    afficher(e1);
    Etudiant e2 = e1;
    puts("E2");
    afficher(e2);
    strcpy(e2.nom, "Ernest");
    puts("E2");
    afficher(e2);
    puts("E1");
    afficher(e1);
    e2.notes[0] = 20;
    puts("E1");
    afficher(e1);
    return 0;
}

void afficher(Etudiant e) {
    printf("%s ", e.nom);
    for (int i = 0; i < 3; i++){
        printf("%d ", e.notes[i]);
    }
    puts("END");
}