#include <stdio.h>


void print() {
    printf("Hello World");
}

int main() {
    printf("Address of print: %p\n", print);
    printf("Address of main: %p\n", main);
    return 0;
}