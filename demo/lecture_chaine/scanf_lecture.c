#include <stdio.h>

int main() {
    char mot[6];
    float number;
    int age;

    scanf("%6s %f %d", mot, &number, &age);

    printf("%s %f %d", mot, number, age);


    return 0;
}