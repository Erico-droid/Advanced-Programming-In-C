#include<stdio.h>

typedef struct point {
    char x;
    int z; //memory alignment: 1+3+4+8
    double y; //memory alignment: 8+4+1
}Point;

int main() {

    unsigned int totalstructbytes = sizeof(Point);
    printf("size: %d\n", totalstructbytes);
    Point p1;

    p1.x = 0xFF;

    p1.y = 0x012345678ABCDEF;

    p1.z = 0x6789ABCD;

    return 0;
}