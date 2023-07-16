#include<stdio.h>

int main() {
    int number;
    printf("enter this number \n");
    scanf("%d", &number);
    if (number > 0) {
        printf("this number is positive ");
    } else {
        printf("this number negative");

    }


    return 0;
}