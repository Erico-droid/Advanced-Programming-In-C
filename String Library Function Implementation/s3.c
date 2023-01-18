#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strCopy(char* dest, char* src) {
    
    char *tempPtr;
    int i = 0;
    tempPtr = dest;

    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;    
}

int main () {

    char str1[5] = "hell";
    char str2[10];

    char *cpy = strCopy(str2, str1);

    printf("%s", cpy);
    // char str1[5] = "Tech";
    // char str2[10];
    // strcpy(str2, str1);
    // printf("%s\n", str1);
    // printf("%s\n", str2); 
    return 0;
}