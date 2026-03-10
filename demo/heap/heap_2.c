#include <stdio.h>
#include <stdlib.h>

int *fonction() {
    int x = 5;              
    int *p = malloc(sizeof(int));
    *p = 42;

    printf("Adresse x : %p\n", (void*)&x);
    printf("Adresse malloc : %p\n", (void*)p);

    return p;
}

int main() {
    int *ptr = fonction();
    printf("Valeur apres retour : %d\n", *ptr);
    free(ptr);
}