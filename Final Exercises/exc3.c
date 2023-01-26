#include<stdio.h>
#include<stdlib.h>

int valueMaxSum(int * arr, int size);

int main() {

    int arr[] = {2,1,3,2,4,2,1};
    // int arr[] = {2,1,3,2,4,2,7};

    int checker = valueMaxSum(arr, sizeof(arr)/sizeof(int));

    printf("\nChecker: %d\n", checker);

    return 0;
}

int valueMaxSum(int * arr, int size) {

    int counter = 0;
    int domSum = 0;
    int result;
    
    for (int i = 0; i < size; i++) {

        for (int j = i; j < size; j++) {

            if (arr[i] == arr[j]) {
                counter += arr[i];
            }

        }

        if (counter > domSum) {
            domSum = counter;
            result = arr[i];
        }
        counter = 0;
    }

    return result;
}