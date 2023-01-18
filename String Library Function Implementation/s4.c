#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strcmpr(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0;

    if (len1 < len2) 
        return -1;
    
    if (len1 > len2)
        return 1;
    
    while(str1[i] != '\0') {
        if (str1[i] != str2[i]) {
            return -1;
        }
        i++;
    }

    return 0;
}


int main() {
    char *str1 = "Helz";
    char *str2 = "Hell";

    printf("%d", strcmpr(str1, str2));
    return 0;
}