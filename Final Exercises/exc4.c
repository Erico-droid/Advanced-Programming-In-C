#include<stdio.h>
#include<stdlib.h>

int largestMissingValue(int* arr, int size);
int largestMissingValue2(int* arr, int size);

int main () {

    int arr[] = {2, 1, 3, 2, 4, 2, 7};
    // int arr[] = {2, 1, 2, 4, 5, 6, 7};

    int checker = largestMissingValue2(arr, sizeof(arr)/sizeof(int));

    printf("\nChecker: %d\n", checker);

    return 0;
}

int largestMissingValue(int* arr, int size) {
   
    int *checkList = (int*)malloc(sizeof(int) * (size+1));
    
    for (int i = 0; i < size; i++) {
        checkList[arr[i]]++;
    }

    int j = size;

    while (j >= 0) {
        if (checkList[j] == 0)
            return j;
        j -= 1;
    }

    return 0;
}

//another solution (not optimal)
int contains(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

int largestMissingValue2(int* arr, int size) {
    int j = size;

    while (j >= 0) {
        if (contains(arr, size, j) == 0) 
            return j;
        j -= 1;
    }
}