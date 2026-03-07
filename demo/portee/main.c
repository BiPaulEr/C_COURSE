#include <stdio.h>

// Declarer la variable globale definie dans variables.c
extern int x;

void maFonction(int param);
void modifierVariables();

int main() {
    printf("Premier appel de maFonction(1) :\n");
    maFonction(1);

    printf("Deuxieme appel de maFonction(2) :\n");
    maFonction(2);

    modifierVariables();

    printf("Apres modification des variables globales :\n");
    maFonction(3);

    // Modifier la variable globale x depuis main.c
    x += 20;   // ✅ x est accessible via extern
    // g += 1; // ❌ Impossible, g est statique globale et privee à variables.c
    // a += 1; // ❌ Impossible, a est locale a maFonction
    // s += 1; // ❌ Impossible, s est locale statique a maFonction

    printf("Apres modification depuis main.c :\n");
    maFonction(4);

    return 0;
}