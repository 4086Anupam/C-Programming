#include<stdio.h>

int main() {
    int monthnumber;
    printf("enter the number \n");
    scanf("%d", &monthnumber);
    if (monthnumber == 1) {
        printf(" is january in 31 day\n");
    } else if (monthnumber == 2) {
        printf(" is February in  28 day\n");
    } else if (monthnumber == 3) {
        printf(" is March in 31 day \n ");
    } else if (monthnumber == 4) {
        printf(" is April in 30 day \n ");
    } else if (monthnumber == 5) {
        printf(" is May in 31 day \n");
    } else if (monthnumber == 6) {
        printf(" is June in 30 day \n");
    } else if (monthnumber == 7) {
        printf(" is July in 31 day \n");
    } else if (monthnumber == 8) {
        printf(" is August in 31 day \n");
    } else if (monthnumber == 9) {
        printf(" is September in 30 day \n");
    } else if (monthnumber == 10) {
        printf(" is October in 31 day \n");
    } else if (monthnumber == 11) {
        printf(" is November in 30 day \n");
    } else if (monthnumber == 12) {
        printf(" is December in 31 day \n");
    } else {
        printf("this is nit month\n");
    }


    return 0;
}