#include <stdlib.h>
#include <stdio.h>

int main(){
    char *chaine = malloc(500 * sizeof(char));

    printf("La chaine est : %s", chaine);

    free(chaine);
}
