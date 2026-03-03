#include "stdio.h"

int somme(int a, int b);

int somme(int a, int b)
{
    int resultat;   // variable locale
    resultat = a + b;
    return resultat;
}
 
int main(){
    int lasomme =  somme(3, 4);
    printf("%d", lasomme);
}

