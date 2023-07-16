#include<stdio.h>

int main() {
    int weeknumber;
    printf("Enter the number \n");
    scanf("%d", &weeknumber);
    if (weeknumber == 1) {
        printf("Monday");
    } else if (weeknumber == 2) {
        printf("Tuesday");
    } else if (weeknumber == 3) {
        printf("Wednesday");
    } else if (weeknumber == 4) {
        printf("Thursday");
    } else if (weeknumber == 5) {
        printf("Friday");
    } else if (weeknumber == 6) {
        printf("Saturday");
    } else if (weeknumber == 7) {
        printf("sunday");
    } else {
        printf("no day");
    }

    return 0;
}