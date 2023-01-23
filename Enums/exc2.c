#include <stdio.h>

enum workingDays {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};

enum months {
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};


int main() {
    enum months month;
    int salaries[12] = {12, 10, 19, 13, 15, 17, 18, 91, 20, 39, 18, 16};
    char *monthNames[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    for (month=JAN; month<=DEC; month++) {
        printf("%2s%5d\n", monthNames[month], salaries[month-1]);
    }
    return 0;
}