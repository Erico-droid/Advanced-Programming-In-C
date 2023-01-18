#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void printfArr(int* arr, int size) {
    printf("\n\n\n");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
}
void copyArr(int *arr, int size, int **result) {
    int i;
    *result = (int*)malloc(size * sizeof(int));
    if(*result != NULL) {
        for (i = 0; i < size; i++) {
            (*result)[i] = arr[i];
        }
    }
}

int main() {
    int* arr = (int*)malloc(2*sizeof(int));
    int *result;
    int size = 4;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3; 
    arr[3] = 4;
    copyArr(arr, size * sizeof(int), &result);
    printfArr(result, size);
    return 0;
}