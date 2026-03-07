#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point p1, p2;
int main(){
    p1.x = 10;
    p1.y = 20;

    printf("Point p1 : (%d, %d)\n", p1.x, p1.y);
    struct Point* ptr = &p1;
    ptr->x = 30;  // équivalent à (*ptr).x = 30
    ptr->y = 40;
    printf("Point p1 : (%d, %d)\n", p1.x, p1.y);
}
