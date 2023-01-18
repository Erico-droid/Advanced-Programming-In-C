#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    char arrStr[] = {'h','e','l','l','o','\0'};
    char str[]= "hello";
    char *str2 = "hello";
    
    // str2[0] = "G";
    str[0] = "G";

    printf("%s", str);
    return 0;
}