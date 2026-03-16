#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int x;
    int y;
} Point;

typedef struct {
    Point** ligne;
} Grille;

int main(){
    int nombre_de_ligne;
    puts("Nombres de Ligne");
    scanf("%d", &nombre_de_ligne);

    int* nombre_de_points_par_ligne = malloc(nombre_de_ligne * sizeof(int));
    for (int i = 0; i < nombre_de_ligne; i++){
        printf("Nombre de points pour la ligne %d : \n", i);
        scanf("%d", nombre_de_points_par_ligne+i);
    }
    for (int i = 0; i < nombre_de_ligne; i++){
        printf("%d -> %d \n", i, nombre_de_points_par_ligne[i]);
    }

    Grille grille;
    grille.ligne = malloc(nombre_de_ligne*sizeof(Point*));

    for (int i = 0; i < nombre_de_ligne; i++){
        grille.ligne[i] = malloc(nombre_de_points_par_ligne[i] *sizeof(Point));
    }

    for (int i = 0; i < nombre_de_ligne; i ++){
        for (int r = 0; r < nombre_de_points_par_ligne[i]; r++){
            scanf("%d %d", &grille.ligne[i][r].x, &grille.ligne[i][r].y);
        }
    }

    for (int i = 0; i < nombre_de_ligne; i ++){
        printf("LIGNE %d ", i);
        for (int r = 0; r < nombre_de_points_par_ligne[i]; r++){
            printf("Point<%d> %d %d ", r, grille.ligne[i][r].x, grille.ligne[i][r].y);
        }
        puts("END");
    }


    for (int i = 0; i < nombre_de_ligne; i++){
        free(grille.ligne[i]);
    }
    free(grille.ligne);
    free(nombre_de_points_par_ligne);
}