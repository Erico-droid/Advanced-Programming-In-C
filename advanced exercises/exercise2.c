#include<stdio.h>
#include<stdlib.h>

void printArray(int *arr, int size) {
    if (arr[0] % 2 == 0)
        printf("\nEven values: ");
    else 
        printf("\nOdd values: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
}

void evenOddSplit(int *arr, int *even, int*odd, int size, int* oddArr, int* evenArr) {
    int evenCount = 0, oddCount = 0, evenX = 0, oddX = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
            even = (int*)malloc(sizeof(int) * evenCount);
        } else {
            oddCount++;
            odd = (int*)malloc(sizeof(int) * oddCount);
        }
        
    }
    if (evenCount > 0) {
        for (size_t i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0) {
            even[evenX] = arr[i];
            evenX++;
            }
        }
        
    } 
    if (oddCount > 0) {
         for (size_t i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0) {
            odd[oddX] = arr[i];
            oddX++;
            }
        }
    }

    oddArr = odd;
    evenArr = even;
    printArray(even, evenX);
    printArray(odd, oddX);
}

int main () {
    int arr[] = {12,5,7,8,3,10,4,9};
    int *evenArr, *ArrOdd;
    int *oddArr, *ArrEven;
    int size = sizeof(arr)/sizeof(int);
    evenOddSplit(arr, evenArr, oddArr, size, ArrOdd, ArrEven);
    
    return 0;
}