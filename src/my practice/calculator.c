#include<stdio.h>

int main() {
    int a, b;
    int sum, division, multiply, subtraction;
    printf("Enter the number\n");
    scanf("%d%d", &a, &b);
     sum = a + b;
     division = a / b;
     multiply = a * b;
     subtraction = a - b;
    printf("tne number of sum %d\n", sum);
    printf("the number of division %d\n", division);
    printf("the number multiply %d \n", multiply);
    printf("the number of subtraction %d\n", subtraction);


    return 0;
}