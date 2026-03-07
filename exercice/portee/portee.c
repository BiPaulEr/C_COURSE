#include <stdio.h>

// Déclare ici une variable globale nommée "x" initialisée à 10 Extern utilisable dans un autre fichier ?
********

// Déclare une variable globale statique nommée "g" initialisée à 100
**********

// Prototype de fonction
void afficher(void);

int main() {
    // Déclare une variable locale automatique "a" initialisée à 5
    ********

    printf("Locale automatique a = %d\n", a);
    // Affiche la globale x et la statique globale g
    printf("Globale x = %d\n", x);
    printf("Statique globale g = %d\n", g);

    // Appel de fonction pour montrer locale statique
    afficher();
    afficher();

    // Modifier la variable globale depuis main
    x += 20;
    printf("Globale x apres modification = %d\n", x);

    return 0;
}

// Fonction pour montrer une variable locale statique
void afficher(void) {
    // Declare une variable statique locale "s" initialisée à 0. sa portee ? sa durée de vie ?
    ___(4)___
    s++;
    printf("Locale statique s = %d\n", s);

    // Essaie d'afficher la variable locale automatique 'a' ici ?
    // printf("%d\n", ___(5)___);
}