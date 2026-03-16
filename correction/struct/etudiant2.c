#include <stdio.h>

typedef struct 
{
   char nom[50];
   int age;
   float moyenne;
} Etudiant;



int main() {
    Etudiant tableau[3]= {{"Bob", 22, 5.5}, {"OK", 19, 19.9}};

    puts("NOM:");
    scanf("%49s", tableau[2].nom);
    puts("AGE:");
    scanf("%d", &tableau[2].age);
    puts("MOYENNE:");
    scanf("%f", &tableau[2].moyenne);

    for (int i = 0; i < 3; i++){
        printf("Etudiant <nom> %s <age> %d <moyenne> %f\n\n", tableau[i].nom, tableau[i].age, tableau[i].moyenne);
    }
   
    return 0;
}
