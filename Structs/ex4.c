#include<stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

typedef struct cirlce {
    Point center;
    double radius;
}Circle;

int main() {
    Point p = {1,2};
    double rad =3.3;
    Circle circle1 = {p,rad};
    // printf("%d", circle1.center.x);
    return 0;
}