#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
   char nom[50];
   int age;
   float moyenne;
} Etudiant;



int main() {
    int nombre_etudiant;
    puts("NOMBRE ETUDIANTS:");
    scanf("%d", &nombre_etudiant);

    Etudiant* tableau = malloc(nombre_etudiant*sizeof(Etudiant));
    if (tableau == NULL) return 1;

    for (int i = 0; i < nombre_etudiant; i++){
        puts("NOM:");
        scanf("%49s", tableau[i].nom);
        puts("AGE:");
        scanf("%d", &tableau[i].age);
        puts("MOYENNE:");
        scanf("%f", &tableau[i].moyenne);
    }
    

    for (int i = 0; i < nombre_etudiant; i++){
        printf("Etudiant <nom> %s <age> %d <moyenne> %f\n\n", tableau[i].nom, tableau[i].age, tableau[i].moyenne);
    }
   
    free(tableau);
    return 0;
}
