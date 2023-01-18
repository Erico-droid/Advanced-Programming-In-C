#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printArr(int* arr, int size) {
    printf("\n\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
}

void* insertF(void* arr, unsigned size, void* src, unsigned idx,  unsigned srcSize) {
    int* newArr;
    newArr = malloc(size + srcSize);
    memcpy(newArr, arr, idx);
    memcpy((char*)newArr + idx, src, srcSize);
    memcpy((char*)newArr + idx + srcSize, (char*)arr + idx, size-idx);
    return newArr;
}

int main() {
    int* arr;
    arr = (int*)malloc(sizeof(int) * 3);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    int size = 3;
    printf("Array before passing into function: ");
    printArr(arr, size);
    int insert = 4;
    int srcSize = sizeof(insert);
    printf("\nArray after passing into function: ");
    int *updatedArr = insertF(arr, size*sizeof(int), &insert, 1*sizeof(int), srcSize);
    printArr(updatedArr, 4);
    return 0;
}