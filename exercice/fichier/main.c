#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[50];
    int age;
    float moyenne;
} Etudiant;

Etudiant* etudiants;
int main(){
    FILE* fichier;
    fichier = fopen("etudiants.txt", "r");
    if (fichier == NULL){
        exit(1);
    }

    char stockage[100];
    if (fgets(stockage, 100, fichier) == NULL){
        exit(1);
    }
    int nombre_etudiant;
    sscanf(stockage, "%d", &nombre_etudiant);
    printf("Nombre d'étudiant = %d\n", nombre_etudiant);

    etudiants = malloc(nombre_etudiant * sizeof(Etudiant));

    for (int i = 0; i < nombre_etudiant; i++){
        if (fgets(stockage, 100, fichier) == NULL){
        exit(1);
        }
        if (sscanf(stockage, "%s %d %f", etudiants[i].name, &etudiants[i].age, &etudiants[i].moyenne) !=3){
            exit(1);
        }
    }
    for (int i = 0; i < nombre_etudiant; i++){
        printf(" Etudiant<%s><%d><%2.f> ",  etudiants[i].name, etudiants[i].age, etudiants[i].moyenne);
    }
    free(etudiants);
    fclose(fichier);
    return 1;
}