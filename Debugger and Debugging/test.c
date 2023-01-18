#include<stdio.h>
#include<stdlib.h>

int main() {
    char str[] = "AlphaTech";
    char *str2 = (char*)malloc(7);
    int **arr = (int*)malloc(2 * sizeof(int*));
    int *a1 = (int)malloc(3 * sizeof(int));
    int *a2 = (int)malloc(3 * sizeof(int));
    str2 = "hello";
    int count = 0;
    while(count != 2) {
        a1[count] = count;
        count++;
    }
    while(count != 5) {
        a2[count] = count;
        count++;
    }
    arr[0] = a1;
    arr[1] = a2;
}