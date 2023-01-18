#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *myRealloc(void *srcblock, unsigned oldsize, unsigned newsize) {
    char *newArr;
    int smallSize;
    newArr = malloc(newsize);
    if (oldsize < newsize)
        smallSize = oldsize;
    else
        smallSize = newsize;
    memcpy(newArr, srcblock, newsize);
}

int main () {
    int *myArr;
    int *temp = NULL;
    int size;
    printf("Enter the size of your array: ");
    scanf("%d", &size);

    myArr = (int*)malloc(sizeof(void)*size);
    if (!myArr) {
        printf("::oops! Error!");
    }
    for (int i = 0; i < size; i++) {
        printf("enter element #%d: ", i);
        scanf("%d", &myArr[i]);
    }
    
    int newSize = size + 2;
    temp = myRealloc(myArr, sizeof(int) * size, sizeof(int) * newSize);
    for (int i = size; i < newSize; i++)
        scanf("%d", &temp[i]);

    for (int i = 0; i < newSize; i++)
        printf("%d", temp[i]);
}