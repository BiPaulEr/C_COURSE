#include <stdio.h>

int main(){
    int n = 10;
    int* p_n = &n;
    printf("%d", p_n);
    printf(":%d", n);
    printf(":%d", *p_n);

    *p_n = 5;
    printf(":%d", n);
}