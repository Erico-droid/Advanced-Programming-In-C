//An array of pointers to functions

#include<stdio.h>
#include<stdlib.h>

void addition (int a, int b) {
    printf("%d + %d = %d\n", a, b, a+b);
}

void subtraction(int a, int b) {
    printf("%d - %d = %d\n", a, b, a-b);
}

void multiplication(int a, int b) {
    printf("%d * %d = %d\n", a, b, a*b);
}

void division(int a, int b) {
    if (b != 0)
        printf("%d / %d = %d\n", a, b, a/b);
    else 
        printf("Cannot divide %d by %d", a, b);
}

int main () {
    // void (*ptrFct)(int, int);  //testing a pointer to function hehe!!
    // ptrFct = addition;
    // ptrFct(20, 25);

    void (*funPtrArray[])(int, int) = {addition, subtraction, multiplication, division};
    int num1, num2, choice;

    printf("Choose: \n 0. Addition\n 1. Subtraction \n 2. Multiplication \n 3. Division\n");
    scanf("%d", &choice);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    funPtrArray[choice](num1, num2); // we picked the appropriate function from the array of pointers to functions

    //no need for all these. Let us use array of pointers to functions.
    // switch (op)
    // {
    // case '+':
    //     addition(num1, num2);
    //     break;
    // case '-':
    //     subtraction(num1, num2);
    //     break;
    // case '*':
    //     multiplication(num1, num2);
    //     break;
    // case '/':
    //     division(num1, num2);
    //     break;
    // default:
    //     printf("No relevant operation!");
    //     break;
    // }



    return 0;
}