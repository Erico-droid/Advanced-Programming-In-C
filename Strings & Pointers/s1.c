#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Write a function that receives a string - "Alpha"
//Return a concatenated string -"AlphaAlpha"

char* strConcat(char *originalStr) {
    char *newStr;
    int i;
    int lengthOriginal = strlen(originalStr);
    newStr = (char*)malloc(2*lengthOriginal * sizeof(char) + 1);//Array of characters
    for (i = 0; i < lengthOriginal; i++) {
        newStr[i] = originalStr[i];
        newStr[i + lengthOriginal] = originalStr[i];
    }
    newStr[i+lengthOriginal] = '\0';
    return newStr;
}


int main() {
    char *str = "hello";
    char *newStr = strConcat(str);
    for (int i = 0; i < strlen(newStr); i++) {
        printf("%c", newStr[i]);
    }
    return 0;
}