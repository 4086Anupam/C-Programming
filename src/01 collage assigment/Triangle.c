#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c && c == a) {
        printf("this is equilateral");
    } else if (a == b || b == c && a == c) {
        printf("isosceles");

    } else {
        printf("scalene");
    }


    return 0;
}