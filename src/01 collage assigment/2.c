#include<stdio.h>

int main() {
    int a, b, c;
    printf("enter of number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("the largest number of a");
    } else if (b >= a && b >= c) {
        printf("the largest number of b");
    } else {
        printf("the largest number of c");
    }


    return 0;
}