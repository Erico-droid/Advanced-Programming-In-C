#include<stdio.h>
#include<stdlib.h>

void print2DMatrix(int **a,  int rows, int columns) {

    int i, j;
    for (i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = %d", i, j, a[i][j]);
        }
        printf("\n");
    }
}


int main() {

    return 0;
}