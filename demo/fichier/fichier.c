#include <stdlib.h>
#include <stdio.h>

typedef struct{
    float x;
    float y;
} Point;

typedef struct {
    Point** ligne;
} Grille;

int main(){
    FILE* fichier;
    fichier = fopen("grille.txt", "r");

    char buffer[100];
    if(fgets(buffer, 100, fichier) == NULL){
        exit(1);
    }
    int ligne;
    int colonne;
    if (sscanf(buffer, "%d %d", &ligne, &colonne) != 2){
        exit(1);
    }
    printf("ligne : %d colonne : %d", ligne, colonne);

    Grille grille;
    grille.ligne = malloc(ligne * sizeof(Point*));
    float px, py;
    for (int l = 0; l < ligne; l++){
        grille.ligne[l] = malloc(colonne * sizeof(Point));
        if(fgets(buffer, 100, fichier) == NULL){
            exit(1);
        }
        for (int c = 0; c < colonne; c++){
        if (sscanf(buffer, "%f %f", &px, &py) != 2){
            exit(1);
        }
         Point p1 = {px, py};
         grille.ligne[l][c] = p1;
        }
    }

     for (int i = 0; i < ligne; i++){
        printf("\nLigne %d : \n", i);
        for (int y = 0; y < colonne; y++){
            printf("Point_%d<%2.f,%2.f>  ", colonne, grille.ligne[i][y].x, grille.ligne[i][y].y);
        }
    }

    for (int l = 0; l < ligne; l++){
        free(grille.ligne[l]);
    }

    free(grille.ligne);

    fclose(fichier);
}