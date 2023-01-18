#include<stdio.h>
#include<stdlib.h>

//a function that allocates a 2d dynamic array and passes it by reference.
void dynamicArray(int*** mat, int size) {
    int** arr = (int**)malloc(size * sizeof(int*));
    int column = size;
    for (int i = 0; i < size; i++) {
        arr[i] = (int*)malloc(size * sizeof(int));
        for (int j = 0; j < column; j++) {
            arr[i][j] = j + 1;
        }
    }
    
    *mat = arr;
    printf("\n%d", mat[0][0]);
}

int main() {
    int** mat;
    int rows = 5;
    dynamicArray(&mat, rows);
    printf("\n%d", mat[0][3]);
    return 0;
}