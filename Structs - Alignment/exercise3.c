#include<stdio.h>

// what will be the memory usage for the below structs?

// typedef struct point1 {
//     char x;
//     char z;
//     double y;
// }Point1;

typedef struct point
{
    char t; //2 + 2 + 4 + 8: 16 bytes
    int x; //1 + 3 + 4 + 1 + 7 + 8: 24 bytes
    char z;
    double y;
}Point;


int main() {

    Point p1;
    unsigned int sizeofpoint = sizeof(Point);
    printf("size: %d\n", sizeofpoint);

    return 0;
}