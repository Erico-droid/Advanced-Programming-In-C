#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Write a function that receives a string - "Alpha"
//Return a concatenated string -"AlphaAlpha"
char *concatString(char *originalStr) {
    char *newStr;
    int originalLength = strlen(originalStr);
    int i;
    newStr = (char*)malloc(2 * originalLength * sizeof(char*) + 1);
    if (!newStr) {
        return NULL;
    }
    int newLen = strlen(newStr);
    for (i = 0; i < originalLength; i++) {
        newStr[i] = originalStr[i];
        newStr[i+originalLength] = originalStr[i];
    }
    newStr[i+originalLength] = '\0';

    return newStr;
}


int main() {
    char *str = "Johnny Bravo";
    char *newStr = concatString(str);
    for (int i = 0; i < strlen(newStr); i++) {
        printf("%c", newStr[i]);
    }
    return 0;
}