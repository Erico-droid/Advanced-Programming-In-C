#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *grades;
    int *temp = NULL;
    int size;
    printf("Enter the total grades: ");
    scanf("%d", &size);

    grades = (int*)malloc(size * sizeof(int));
    if (!grades) {
        printf("\n::oops! There was an error!::");
    }

    for (int i = 0; i < size; i++) {
        printf("Enter grade #%d: ", i);
        scanf("%d", &grades[i]);
    }

    //code...
    printf("\n::oops! I need to increase the size of my array...::");
    printf("\nEnter the new size: ");
    scanf("%d", &size);

    temp = (int*)realloc(grades, sizeof(int) * size);
    if (temp != NULL) {
        grades = temp;
    }
    grades[size - 1] = 100;
    grades[size - 2] = 90;

    for (int i = 0; i < size; i++) {
        printf("%d ", grades[i]);
    }

    printf("\n\n");
    size -= 3;
    temp = (int*)realloc(grades, sizeof(int) * size);
    if (temp != NULL) {
        grades = temp;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", grades[i]);
    }

    free(grades);
    return 0;
}