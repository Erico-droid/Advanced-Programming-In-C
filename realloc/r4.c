#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void create1dbyRef(int size, int **ptr) {
    int *arr;
    int i;
    

    arr = (int*)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++) {
        printf("Enter array #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

   *ptr = arr;
    
}


int main () {
    int* ptr;
    int size, i;
    printf("Kindly enter the size of your array: ");
    scanf("%d", &size);
    create1dbyRef(size, &ptr);
    
    for (i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    
    return 0;
}