#ifndef POINT_H
#define POINT_H

typedef struct {
    int x;
    int y;
} Point;

float distance(Point p1, Point p2);

#endif