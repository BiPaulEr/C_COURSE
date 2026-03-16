#include "point.h"
#include "math.h"

float distance(Point p1, Point p2){
    return pow(pow((p1.x -p2.x), 2) + pow((p1.y -p2.y), 2), 0.5);
}