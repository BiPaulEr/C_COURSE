#include <stdio.h>

int main(){
	int a = 5;
    int* p_a;
    p_a = &a;
    int b = *p_a;
    *p_a = 7;
    printf("%d", a);
    puts("OK");

};