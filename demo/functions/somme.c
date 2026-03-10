#include <stdio.h>

void print_msg(const char *msg);

int twice(int y);

int main() {
    int n, resultat;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    resultat = twice(n);
    printf("Le double de %d est %d\n", n, resultat);
    print_msg("Fin de l'exemple");
    return 0;
}

void print_msg(const char *msg) {
    printf("%s\n", msg);
}

int twice(int y)
{
    return 2 * y;
}
