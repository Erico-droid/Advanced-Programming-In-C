#include<stdio.h>

typedef struct test {
    double average; // 8bytes;
    char mark1; // 1byte;
    char mark2; //1byte;
    short result; //2 bytes;
    int value; //4 bytes;
    double salary; //8bytes
}Test;

int main() {
    Test test;
    return 0;
}