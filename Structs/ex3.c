#include<stdio.h>

typedef struct employee {
    char name[10];
    float age;
    int id;
}Employee;

void printEmployee(Employee emp) {
    printf("Employee #1 name is %s\n", emp.name);
    printf("Employee #1 age is %.2f\n", emp.age);
    printf("Employee #1 id is %d\n", emp.id);
}

//wrong
// void increaseAgeBy1(Employee emp) {
//     emp.age += 1;
//     // printf("%.2f", emp.age);
// }

void increaseAgeBy1(Employee *empPtr) {
    (*empPtr).age += 1;
    // printf("%.2f", emp.age);
}

int main() {
    Employee employee1 = {"Jake", 24.5, 123};
    increaseAgeBy1(&employee1);
    printEmployee(employee1);
    return 0;
}