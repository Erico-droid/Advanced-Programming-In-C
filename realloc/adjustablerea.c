#include<stdio.h>
#include<stdlib.h>

int *myRealloc(int *size) {
    int *myArr;
    int *temp = NULL;
    int defaultSize = 0;
    int i = 0, count = 0, terminator;
    myArr = (int*)malloc(sizeof(int) * defaultSize);
    
    
    printf("\nEnter your array and terminate using -1: ");
    while(terminator != -1) {
        temp = realloc(myArr, (defaultSize + 1) * sizeof(int));
        scanf("%d", &temp[i]);
        myArr[i] = temp[i];
        terminator = myArr[i];
        defaultSize++;
        i++;
    }

    *size = defaultSize - 1;
    return myArr;
}

int main () {
    int size;
    int *result = myRealloc(&size);
    printf("\nThe number of elements passed are: %d", size);

    for (int x = 0; x <= size - 1; x++) {
        printf("\nx:%d  %d,", x, result[x]);
    }
    return 0;
}