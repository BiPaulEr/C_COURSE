#include <stdio.h>

void afficherMenu();
void saisirDeuxEntiers(int *a, int *b);
int somme(int a, int b);
int max(int a, int b);
int factorielle(int n);
int estPremier(int n);

int main() {
    int choix;
    int a, b;

    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {
            saisirDeuxEntiers(&a, &b);
            printf("Somme = %d\n", somme(a, b));
        }
        else if (choix == 2) {
            saisirDeuxEntiers(&a, &b);
            printf("Maximum = %d\n", max(a, b));
        }
        else if (choix == 3) {
            printf("Entrer un entier positif : ");
            scanf("%d", &a);

            if (a < 0)
                printf("Erreur : nombre negatif\n");
            else
                printf("Factorielle = %d\n", factorielle(a));
        }
        else if (choix == 4) {
            printf("Entrer un entier : ");
            scanf("%d", &a);

            if (estPremier(a))
                printf("%d est un nombre premier\n", a);
            else
                printf("%d n'est pas un nombre premier\n", a);
        }
        else if (choix == 0) {
            printf("Fin du programme.\n");
        }
        else {
            printf("Choix invalide !\n");
        }

        printf("\n");

    } while (choix != 0);

    return 0;
}

// ---------- Fonctions ----------

void afficherMenu() {
    printf("===== MENU =====\n");
    printf("1. Somme de deux nombres\n");
    printf("2. Maximum de deux nombres\n");
    printf("3. Factorielle d'un nombre\n");
    printf("4. Test nombre premier\n");
    printf("0. Quitter\n");
}

void saisirDeuxEntiers(int *a, int *b) {
    printf("Entrer deux entiers : ");
    scanf("%d %d", a, b);
}