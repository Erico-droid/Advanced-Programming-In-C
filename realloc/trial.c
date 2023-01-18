#include<stdio.h>
#include<stdlib.h>

void displayGrades(float *arr, int size) {
    int i;
    printf("\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%.2f ", arr[i]);
    }
    
}

void *myRealloc(void *oldArr, unsigned oldsize, unsigned newsize) {
    char *newArr;
    int smallsize;

    newArr = (char*)malloc(newsize);
    if (!newArr) {
        printf("::error::");
        exit(1);
    }
    if (oldsize < newsize)
        smallsize = oldsize;
    else
        smallsize = newsize;

    for (int i = 0; i < smallsize; i++) {
        newArr[i] = ((char*)oldArr)[i];
        }

    free(oldArr);
    return newArr;
}

int main() {
    float *grades, *temp = NULL;
    int size, add, newSize;
    int choice;
    printf("How many grades would you like to submit? ");
    scanf("%d", &size);
    
    grades = (float*)malloc(sizeof(float)*size);
    if (!grades)
        printf("::error!::");
    
    for (int i = 0; i < size; i++) {
        printf("Enter grade #%d: ", i+1);
        scanf("%f", &grades[i]);
    }


    printf("would you like to add other grades?(1 for yes/ 0 for no) ");
    scanf("%d", &choice);
    if (choice == 0){ 
        displayGrades(grades, size);
        exit(1);
    }
    else {
        printf("\nHow many grades would you like to add? ");
        scanf("%d", &add);
    }

    newSize = size + add;
    temp = (float*)myRealloc(grades, size * sizeof(float), newSize * sizeof(float));
    
    // printf("%d", newSize);
    displayGrades(temp, newSize);
    return 0;
}