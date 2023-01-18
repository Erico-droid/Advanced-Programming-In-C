#include<stdlib.h>
#include<stdio.h>

//2d dynamically allocated arrays
int** allocate2DMatrix() {
    int rows, columns;
    int** a;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    a = (int**)calloc(rows, sizeof(int*));
    if (!a) return NULL;
    for (int i = 0; i < rows; i++) {
        printf("Enter the number of columns: ");
        scanf("%d", &columns);
        a[i] = (int*)calloc(columns, sizeof(int));
        if(!a[i]) {
            // Free the matrix
            return NULL;
        }
    }
    return a;
}


int main() {
    int** myMatrix;
    myMatrix = allocate2DMatrix();
    return 0;
}