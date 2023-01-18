#include<stdio.h>
#include<stdlib.h>

int*** lowerTriangularMatrix(int** arr, int size, int *** ptr) {
    int columns = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = (int*)calloc(columns, sizeof(int));
        for (int j = 0; j < columns; j++) {
            arr[i][j] = j;
            printf("%d", arr[i][j]);
        }
        printf("\n");
        columns++;
    }
    ptr = &arr;
    arr[0] = 0;
    return ptr;
}

int*** upperTriangularMatrix(int** arr, int size, int *** ptr) {
    int columns = size;
    for (int i = 0; i < size; i++) {
        arr[i] = (int*)calloc(columns, sizeof(int));
        for (int j = 0; j < columns; j++) {
            arr[i][j] = j+1;
        }
        columns--;
    }
    ptr = &arr;
    return ptr;
}

void printLowerTriangularMatrix(int **ptr, int size) {
     // printf("%d", ptr[2][2]);
    int column = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d", ptr[i][j]);
        }
        printf("\n");
        column++;
    }
}


void printUpperTriangularMatrix(int **ptr, int size) {
    // printf("%d", ptr[2][2]);
    int column = size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d", ptr[i][j]);
        }
        printf("\n");
        column--;
    }
}


int main() {
    int*** arr;
    int** row;
    int*** a;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    row = (int**)calloc(rows, sizeof(int*));
    if (!row)
        printf("::ERROR::");

    arr = upperTriangularMatrix(row, rows, a);
    // printf("%d", arr[0][1][1]);
    printLowerTriangularMatrix(*arr, rows);
    return 0;
}