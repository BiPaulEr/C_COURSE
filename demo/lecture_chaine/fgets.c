#include <stdio.h>
#include <string.h>

int main() {
    char ligne[10]; // ligne un peu plus longue pour fgets

    printf("Exemple 1 - fgets : lecture d'une ligne complete\n");
    fgets(ligne, sizeof(ligne), stdin);
    printf("Ligne lue avec fgets : '%s'\n", ligne);

    printf("\n");

    printf("Exemple 2 - fgets avec espace\n");
    printf("Tape 'abc de' : ");
    fgets(ligne, sizeof(ligne), stdin);
    printf("Ligne lue avec fgets : '%s'\n", ligne);

    return 0;
}