#include<stdio.h>

int main() {
    int year;
    printf("Enter the number \n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0|| year % 400 == 0) {
        printf("this year is leap year");
    } else {
        printf("this year is not leap year");
    }


    return 0;
}