#include<stdio.h>
#include<stdlib.h>

int *reallocate(int *oldArr, int oldSize, int newSize) {
    int *newArr;
    int i;
    newArr = (int*)malloc(sizeof(int) * newSize);
    for (i = 0; i < oldSize; i++) {
        newArr[i] = oldArr[i];
    }
    free(oldArr);
    return newArr;
}

int main () {

    int *myArr;
    int size, sizeNew;

    printf("Enter the size of your arr: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter #%d: ", i);
        scanf("%d", &myArr[i]);
    }

    printf("Ow, snap. I need to change the size of the arr....");
    printf("\nEnter the size then: ");
    scanf("%d", &sizeNew);

    myArr = reallocate(myArr, size, sizeNew);

    for (int i = size; i < sizeNew; i++) {
        printf("Enter new value %d: ", i);
        scanf("%d", &myArr[i]);
    }
    
    return 0;
}