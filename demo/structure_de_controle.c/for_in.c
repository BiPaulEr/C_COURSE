#include <stdio.h>

int main() {
    int i, somme = 0;
    for (i = 1; i <= 10; i++) {
        somme += i;
    }
    printf("Somme = %d\n", somme);
    return 0;
}
