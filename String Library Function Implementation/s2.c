#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char *strCat(char* strDestination, char *strSource) {
    int totalLen = strlen(strDestination) + strlen(strSource);
    char *newString = (char*)malloc(totalLen * sizeof(char) + 1);
    if (!newString)
        return NULL;
    strcpy(newString, strDestination);
    strcpy(newString + strlen(strDestination), strSource);

    //or//

    // for (int i = 0; i < strlen(strDestination); i++) {
    //     newString[i] = strDestination[i];
    // }

    // for (int i = 0; i < strlen(strSource; i++) {
    //     newString[i+strlen(strDestination)] = strSource[i];
    // }

    //then//

    newString[strlen(strDestination) + strlen(strSource) + 1] = '\0';

    return newString;
}


int main() {

    char str1[] = "AlphaTech-";
    char str2[] = "BalphaTech";
    // printf("%d", strlen(str1));
    char *final = strCat(str1, str2);
    printf("%s", final);
    // char strDestination[20] = "Hello ";
    // char strSource[] = "World";

    // strcat(strDestination, strSource);

    // printf("%s", strDestination);

    return 0;
}