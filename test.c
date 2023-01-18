#include<stdio.h>
#include<stdlib.h>

int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *myArr;
    int i;
    int size = sizeof(arr)/sizeof(int);
    myArr = (int*)calloc(size, sizeof(int));
    if (!myArr) {
        printf("oops! There was an error!");
    }
    for (i = 0; i < size; i++) {
        int temp = arr[i];
        myArr[i] = temp;
    }
    for (i = 0; i < size; i++) {
        printf("%d,", myArr[i]);
    }
    free(myArr);
    return 0;
}