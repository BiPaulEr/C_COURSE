#include <stdio.h>
#include <stdlib.h>


int main()
{
    float depenses[5] = {5, 4, 3, 2, 1};
    int compteur;
    for (compteur = 0; compteur < 10; compteur++)
    {
       printf("Mois %d = %.2fF\n", compteur, depenses[compteur]);
    }
    exit(0);
}
