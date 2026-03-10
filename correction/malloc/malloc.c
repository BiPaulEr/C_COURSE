#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Entrez la taille du tableau : \n");
    scanf("%d", &n);
    int *p_tab = malloc(n * sizeof(int));
    if (p_tab == NULL){
        exit(1);
    }
    printf("\nTableau x creer avec %d elements à l'adresse %p", n, p_tab);
    printf("Entrez %d elements du tableau : \n");
    for (int i = 0; i < n; i++){
        scanf("%d", p_tab+i);
    }
    for (int i = 0; i < n; i++){
        printf("%d ", *(p_tab+i));
    }
    free(p_tab);
}