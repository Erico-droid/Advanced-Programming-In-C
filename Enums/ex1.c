#include <stdio.h>

enum workingDays {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};

enum months {
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};


int main() {
    enum workingDays userDay; //creating a day variable of an enum type
    printf("Enter the day you worked: ");
    scanf("%d", &userDay);
    if (userDay == MONDAY)
        printf("Monday... Do this, do that... \n");  
    else if (userDay == TUESDAY)
        printf("Tuesday ineed");
        //Do something related to tuesday.
    return 0;
}