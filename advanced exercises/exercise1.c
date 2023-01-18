//Given a sorted array of integers [1,3,3,5,6,7,7,7,8,12,12]
//create a new, dynamically allocated array, with no duplicates [1,3,5,6,7,8,12]

#include<stdio.h>
#include<stdlib.h>
void printFunction (int*arr, int size) {
    printf("\nArray values\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int* removeDuplicates(int *sourceArray, int size, int **newSize) {
    int *newArr;
    int count = 1;
    int xcount = 0;
    int i;
    for(i=0; i < size - 1; i++) {

        if (sourceArray[i] != sourceArray[i+1]) {
            count++;
        }
        newArr = (int*)malloc(sizeof(int) * count); 
    }
    for(i=0; i < size; i++) {
        if (sourceArray[i] != sourceArray[i+1]) {
            newArr[xcount] = sourceArray[i];
            xcount++;
        }
    }

    *newSize = &count;
    
    return newArr;
}

int main() {
    int arr[] = {1,3,3,5,6,7,7,7,8,8,8,12,12};
    int *newSize;
    int size = sizeof(arr)/sizeof(int);
    int* noDuplicateArr = removeDuplicates(arr, size, &newSize);
    printFunction(noDuplicateArr, *newSize);
    return 0;
}