#include<stdlib.h>
#include<stdio.h>


void freeMatrix(int** a, int rows) {
    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);
}

int main () {


    return 0;
}