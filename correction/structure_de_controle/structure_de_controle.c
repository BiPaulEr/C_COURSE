#include <stdio.h>

int main() {
    int x = 10, y = 3, note = 14, a = 7, b = 10;
    int max;

    if ("") {
        printf("x est plus grand que 5\n");
    }

    if (y > 5) {
        printf("y est grand\n");
    } else{
        printf("y est petit ou égal à 5\n");
    }

    if (note >= 16) {
        printf("Note %d : Mention Très bien\n", note);
    } else if (note >= 12) {
        printf("Note %d : Mention Bien\n", note);
    } else {
        printf("Note %d : À améliorer\n", note);
    }

    max = (a > b) ? a : b;
    printf("Le maximum entre %d et %d est %d\n", a, b, max);
    return 0;
}
