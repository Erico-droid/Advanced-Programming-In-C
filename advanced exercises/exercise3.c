#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implementing Insert Operation //

// void

void* insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourceSize);
void printArr(int* arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

int main()
{
	int* grades = (int*)malloc(3 * sizeof(int));
	int grade;
	int* updatedArr = NULL;
	if (!grades) return NULL;
	grades[0] = 90;
	grades[1] = 80;
	grades[2] = 100;
	printArr(grades, 3);
	printf("Enter additional grade to add to arr: ");
	scanf("%d", &grade);
	updatedArr = (int*)insert(grades, 3 * sizeof(int), 2*sizeof(int), &grade, sizeof(grade));
	printArr(updatedArr, 4);
	return 0;
}

void* insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourceSize)
{	
	
	void* newArr = malloc(size + sourceSize); //this is to allocate a memory to the newArr with the size of old array and the value to be added
	if (!newArr) return NULL;
	memcpy(newArr, arr, idx); //this is to copy to the newArr from arr beginning upto where the value is to be inserted
	// note: pointer arithmetic is not allowed by standard...
	//memcpy(newArr + idx, source, sourceSize); 
	memcpy((char*)newArr + idx, source, sourceSize); //this is to copy the inserted value.
	memcpy((char*)newArr + idx + sourceSize, (char*)arr + idx, size-idx); //this is to copy the rest of the array from where the value was inserted.
	return newArr;
}

