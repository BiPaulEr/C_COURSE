#include <stdio.h>

typedef struct {
    char nom[50];
    int age;
    float moyenne;
} Etudiant;

int main() {
    Etudiant etudiants[3] = {
        {"Alice", 20, 15.5},
        {"Bob", 22, 14.0}
    };

    printf("Entrez le nom : ");
    scanf("%49s", etudiants[2].nom);

    printf("Entrez l'age : ");
    scanf("%d", &etudiants[2].age);

    printf("Entrez la moyenne : ");
    scanf("%f", &etudiants[2].moyenne);

    // Affichage de tous les étudiants
    printf("\nListe des étudiants :\n");
    for(int i = 0; i < 3; i++) {
        printf("Etudiant %d : %s, Age : %d, Moyenne : %.2f\n",
               i+1, etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
    }

    return 0;
}
