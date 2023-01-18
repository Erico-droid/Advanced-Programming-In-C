#include<stdio.h>
#include<stdlib.h>

void swapRows(void **a, int row1, int row2) {
    // row2 = row1[0];
    void *temp = a[row1];
    a[row1] = a[row2];
    a[row2] = temp;
}

int** swapColumns(int**a, int rows, int column1, int column2) {
    for (int i = 0; i < rows; i++) {
        int temp = a[i][column1];
        a[i][column1] = a[i][column2];
        a[i][column2] = temp;
    }

    return a;
}

void print2DArray(int **a, int rows, int columns) {
    int i, j;
    printf("\n");
    printf("::Printing 2D Array::\n");
    for (i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int** a;
    int** newA;
    int rows, columns, count = 1;
    rows = 3;
    columns = 3;
    a = (int**)calloc(rows, sizeof(int*));
    for (int i = 0; i < rows; i++) {
        a[i] = (int*)calloc(columns, sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            a[i][j] = count++;
        }
    }
    swapRows(a, 0, 1);
    newA = swapColumns(a, rows, 0, 2);
    print2DArray(newA, rows, columns);
    return 0;
}