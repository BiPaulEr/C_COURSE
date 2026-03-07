#include <stdio.h>

// Globale externe : accessible depuis tout le fichier via extern
int x = 10;

// Statique globale : accessible uniquement dans ce fichier
static int g = 100;

void maFonction(int param) {
    // Locale automatique : disparait après l’appel, accessible seulement dans ce bloc
    int a = 5;

    // Locale statique : garde sa valeur entre les appels, accessible seulement dans cette fonction
    static int s = 0;

    s++; 
    a++;

    printf("Parametre : %d\n", param);
    printf("Locale automatique a: %d\n", a);
    printf("Locale statique s: %d\n", s);
    printf("Globale x: %d\n", x);
    printf("Statique globale g: %d\n", g);
    printf("-----------------------------\n");
}

void modifierVariables() {
    x += 5;   // ✅ x est globale, accessible ici
    g += 50;  // ✅ g est statique globale, accessible dans ce fichier
    // a += 1; // ❌ Impossible, 'a' est locale à maFonction
    // s += 1; // ❌ Impossible, 's' est locale statique à maFonction
}