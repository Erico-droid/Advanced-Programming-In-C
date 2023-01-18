#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// An array of pointers

int main() {
    int *arr[5];
    int numOfColumns;
    for (int i = 0; i < 5; i++) {
        printf("Enter number of columns for this row: ");
        scanf("%d", &numOfColumns);
        arr[i] = (int*)calloc(numOfColumns, sizeof(int));
    }
    return 0;
}