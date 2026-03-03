#include "stdio.h"

int choix_menu(void)
{
    int selection = 0;
    do
    {
        printf("\n");
        printf("1 - Ajouter un enregistrement\n");
        printf("2 - Changer un enregistrement\n");
        printf("3 - Effacer un enregistrement\n");
        printf("4 - Sortie\n");
        printf("\n");
        printf("Entrez votre choix :");
       scanf("%d", &selection);
   } while (selection < 1 || selection > 4);

   return selection;
}


int main(){
    int choix = choix_menu();
    printf("%d","Bravo vous avez selectionnez", choix, "\n");
}