#include<stdio.h>

// what will be the memory usage for the below structs?

typedef struct point {
    char x;
    double y; //memory usage for this struct will be: 1 + 7 + 8 + 1 + 7 = 24 bytes
    char z;
}Point;

typedef struct point
{
    char x;
    char z; //memory usage for this struct will be: 1 + 1 + 6 + 8 = 16 bytes
    double y;
}Point;


int main() {

    Point p1;
    unsigned int sizeofpoint = sizeof(Point);
    printf("size: %d\n", sizeofpoint);

    return 0;
}