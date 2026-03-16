#include <stdio.h>

int main(){
    int a = -1;

    printf("%d -- %u", a, a);
    int b = -2;

    printf("%d -- %u", b, b);

    char* c = "A";
    printf("\n%c", *c);
    printf("\n%d", *c);

    char* d = "a";
    printf("\n%c", *d);
    printf("\n%d", *d);
}