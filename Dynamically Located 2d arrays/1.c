#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// An array of pointers

int main() {
    int *arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        arr[i] = (int*)calloc(3, sizeof(int));
    }
    arr[1][1] = 30;
    // scanf("%d", arr[0][2]);
    printf("arr[1][1] = %d\n", arr[1][1]);
    return 0;
}