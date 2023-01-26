#include<stdio.h>
#include<stdlib.h>

int checkArray(int * arr, int freq, int size);


int main() {

    int arr1[] = {1,2,2,1,4,3};
    // int arr1[] = {3,2,2,1,3,3};

    int checker = checkArray(arr1, 4, sizeof(arr1)/sizeof(int));
    return 0;
}

int contains(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

int checkArray(int * arr, int freq,  int size) {
    int *checkList = (int*)malloc(sizeof(int) * freq);
    int count = 0;
    int checkListCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (contains(checkList, freq, arr[i]) == 1)
            // i += 1;
            continue;
        else {
            checkList[checkListCount] = arr[i];
            checkListCount++;
        }

        for (int j = i; j < size; j++) {

            if (arr[i] == arr[j]) {
                count++;
            }

        }

        if (count > arr[i] || count < arr[i])
            return 0;
        count = 0;
    }

    return 1;
}