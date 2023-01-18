#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strLen(char *str) {
    int i= 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char name[5] = "Tech";
    int length = strLen(name);
    printf("%d\n", length);
    return 0;
}