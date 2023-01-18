#include<stdio.h>
#include<stdlib.h>

void *myRealloc(void *srcblock, unsigned oldsize, unsigned newsize) {
    char *newArr;
    int smallSize;
    if (oldsize < newsize)
        smallSize = oldsize;
    else
        smallSize = newsize;
    newArr = (char*)malloc(newsize);
    if (!newArr) return NULL;
    for (int i = 0; i < smallSize; i++) {
        newArr[i] = ((char*)srcblock)[i];
    }
    free(srcblock);
    return newArr;
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
    printf("%d",temp[0]);
}