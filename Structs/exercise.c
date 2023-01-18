#include<stdio.h>
#include<stdlib.h>

typedef struct employee {
    char name[10];
    float age;
    int id;
}Employee;


Employee *createEmpArray(int size) {
    Employee *empArr;
    empArr = (Employee*)malloc(sizeof(Employee) * size);

    for (int i = 0; i < size; i++) {
        printf("Enter the name of employee #%d: ", i);
        scanf("%s", &empArr[i].name);
        printf("Enter the age of employee #%d: ", i);
        scanf("%f", &empArr[i].age);
        printf("Enter the id of employee #%d: ", i);
        scanf("%d", &empArr[i].id);
    }

    return empArr;
}

void createEmpArray2(Employee** ptr, int size) {
    Employee *empArr;
    empArr = (Employee*)malloc(sizeof(Employee) * size);

    for (int i = 0; i < size; i++) {
        printf("Enter the name of employee #%d: ", i);
        scanf("%s", &empArr[i].name);
        printf("Enter the age of employee #%d: ", i);
        scanf("%f", &empArr[i].age);
        printf("Enter the id of employee #%d: ", i);
        scanf("%d", &empArr[i].id);
    }
    
    *ptr = empArr;
}


int main() {
    int employees;
    Employee *empArr;
    Employee *ptr;

    printf("Enter the number of employees you would like to enter: ");
    scanf("%d", &employees);

    // empArr = createEmpArray(employees);

    // for (int i = 0; i < employees; i++) {
    //     printf("Name: %s\n", (empArr+i) -> name);
    //     printf("Age: %f\n", (empArr+i) -> age);
    //     printf("ID: %d\n", (empArr+i) -> id);
    // }
    createEmpArray2(&ptr, employees);

    for (int i = 0; i < employees; i++) {
        printf("Name: %s\n", (empArr+i) -> name);
        printf("Age: %f\n", (empArr+i) -> age);
        printf("ID: %d\n", (empArr+i) -> id);
    }

    return 0;
}