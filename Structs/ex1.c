#include<stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

int main() {

    Point pointArray[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter point #%d coordinante (x,_): ", i);
        scanf("%d", &pointArray[i].x);
        printf("Enter point #%d coordinante (_,y): ", i);
        scanf("%d", &pointArray[i].y);
    }

    i = 0;

    for (i = 0; i < 5; i++) {
        printf("Point #%d Coordinate (x,y): (%d, %d)\n", i, pointArray[i].x, pointArray[i].y);
    }

    return 0;
}