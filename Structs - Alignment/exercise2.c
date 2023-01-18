#include<stdio.h>

// what will be the memory usage for the below structs?

typedef struct point1 {
    char x;
    char z;
    double y;
}Point1;

typedef struct point
{
    char t;
    short x; //1 + 1 + 2 + 1 + 3 + 8: 16 bytes
    char z;
    double y;
}Point;


int main() {

    Point p1;
    unsigned int sizeofpoint = sizeof(Point);
    printf("size: %d\n", sizeofpoint);

    p1.t = 0x11;
    p1.x = 0xAABB;
    p1.z = 0xEE;
    p1.y = 0x123456789ABCDEF;

    return 0;
}