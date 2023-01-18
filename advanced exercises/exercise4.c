#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void *removeF(void *arr, unsigned size, unsigned idx, unsigned srcSize) {
    void *newArr = malloc(size - srcSize);
    if (!newArr) 
        printf("::unexpected error::");
    memcpy(newArr, arr, idx);
    memcpy((char*)newArr + idx, (char*)arr + idx + srcSize , size - idx - srcSize);
    return newArr;
}

int main () {
    int* arr;
    arr = (int*)malloc(sizeof(int) * 3);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    printf("Array before firing: ");
    printArr(arr, 3);
    int idx = 0;
    int* updatedArr = removeF(arr, 3*sizeof(int), idx*sizeof(int), sizeof(int));
    printf("\nArray after firing: ");
    printArr(updatedArr, 2);
    return 0;
}