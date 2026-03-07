#include <stdio.h>

int main() {
    char mot[6]; // petit tableau pour démontrer le buffer limité

    printf("Exemple 1 - scanf : mot max 5 caracteres\n");
    printf("Tape un mot Bonjour: ");
    scanf("%5s", mot);
    printf("Mot lu avec scanf : '%s'\n", mot);
    getchar();

    printf("\n");

    printf("Exemple 2 - scanf : avec depassement possible caracteres\n");
    printf("Tape un mot Bonjour : ");
    scanf("%s", mot);
    printf("Mot lu avec scanf : '%s'\n", mot);
    getchar();

    printf("\n");

    printf("Exemple 3 - scanf avec espace\n");
    printf("Tape 'abc de' : ");
    scanf("%5s", mot);
    printf("Mot lu avec scanf : '%s'\n", mot);
    getchar();

    return 0;
}