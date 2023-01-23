#include<stdio.h>

int main () {

    const int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n%d\n", age);

    //constant pointer, the pointer cannot be changed.
    int * const ptr;

    //value of what is being pointed to cannot be changed.
    const int * ptr;

    //value of pointer and what is being pointed to cannot be changed
    const int *const ptr;

    return 0;
}