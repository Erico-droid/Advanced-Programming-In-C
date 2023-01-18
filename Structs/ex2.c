#include<stdio.h>
#include<stdlib.h>

typedef struct point {
    int x;
    int y;
}Point;

int main() {

    Point *pointsArr;
    int i;
    int totalPoints;

    printf("Enter the total number of points you need to enter: ");
    scanf("%d", &totalPoints);

    pointsArr = (Point*)malloc(totalPoints * sizeof(Point));

    for (i = 0; i < totalPoints; i++) {
        printf("Enter coordinate x for Point #%d: ", i+1);
        scanf("%d", &pointsArr[i].x);
        printf("Enter coordinate y for Point #%d: ", i+1);
        scanf("%d", &pointsArr[i].y);
    }

    for (i = 0; i < totalPoints; i++) {
        printf("Coordinate (x,y) is (%d, %d) at point #%d\n", pointsArr[i].x, pointsArr[i].y, i+1);
    }

    return 0;
}
