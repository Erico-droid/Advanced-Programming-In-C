#include<stdlib.h>
#include<stdio.h>

int findDominantValue(int * arr, int size);
int main() {

    // int arr[] = {3, 5, 4, 3, 3};
    int arr[] = {6, 3, 3, 3, 3, 6};

    int checker = findDominantValue(arr, sizeof(arr)/sizeof(int));

    printf("\nChecker: %d\n", checker);

    return 0;
}

int findDominantValue(int * arr, int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {

        for (int j = i; j < size; j++) {

            if (arr[i] == arr[j]) {
                count++;
            }

        }

        if (count > size / 2)
            return arr[i];
        count = 0;
    }

    return -1;
}