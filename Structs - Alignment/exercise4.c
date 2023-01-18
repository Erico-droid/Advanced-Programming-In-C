#include<stdio.h>

typedef struct a {
    short val1;
    int val2; //2 + /2/ + 4 + 1 + /3/: 12 bytes
    char val3;
}A;

typedef struct b {
    char val1;
    int val2; //1 + 3 + 4 + 16: 24 bytes 
    A val3;
}B;

int main() {

    unsigned int totalBytesA = sizeof (A);
    unsigned int totalBytesB = sizeof (B);

    printf("A: %d, B: %d \n", totalBytesA, totalBytesB);

    B b1;
    b1.val1 = 0xFF;
    b1.val2 = 0x12341234;
    b1.val3.val1 = 0xBBDD;
    b1.val3.val2 = 0xAACCEEFF;
    b1.val3.val3 = 0x99;

    return 0;
}