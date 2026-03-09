#include <stdio.h>

int main(){

    float notes[5] = {3.1, 3.1, 3.1, 3.1, 3.2};
    float somme = 0;

    for (int i = 0; i < 5; i++){
        somme += notes[i];
    }
    printf("Somme %f : ", somme);

    float moyenne = somme / 5;
    printf("Moyenne %f : ", moyenne);
}