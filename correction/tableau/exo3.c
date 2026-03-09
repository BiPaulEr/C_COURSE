#include <stdio.h>

int main(){
    int tab[5][5];

    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            tab[x][y] = (x+1)*(y+1);
        }
    }
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            printf("%d x %d = %d \n", x+1, y+1, tab[x][y]);
        }
    }
}