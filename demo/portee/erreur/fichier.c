#include <stdio.h>

int x; //lack of extern

//extern int x; //correction

void maFonction(int param) {
   
    int a = 5;

    static int s = 0;
    x++;
    s++; 
    a++;

    printf("Parametre : %d\n", param);
    printf("Locale automatique a: %d\n", a);
    printf("Locale statique s: %d\n", s);
    printf("Globale x: %d\n", x);
    printf("-----------------------------\n");
}