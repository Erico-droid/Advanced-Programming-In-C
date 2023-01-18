#include<stdio.h>
#include<stdlib.h>

void ageFunc(int age) {
    printf("Your age is: %d\n", age);
}


int main() {
    int age;
    void (*ptrFunc)(int); //we've created a pointer to a function
    printf("Enter your age: ");
    scanf("%d", &age);

    ptrFunc = ageFunc;
    (ptrFunc)(age);


    // ageFunc(age);

    return 0;
}