#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;                 
    int *p = malloc(sizeof(int));

    *p = 20;

    printf("Adresse de a (stack) : %p\n", (void*)&a);
    printf("Adresse de p (stack) : %p\n", (void*)&p);
    printf("Adresse pointee par p (heap) : %p\n", (void*)p);

    free(p);
    return 0;
}