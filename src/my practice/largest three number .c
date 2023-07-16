#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the number \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("the largest number A");
    } else if (b >= a && b >= c) {
        printf("the largest number B");
    } else {
        printf("the largest number C");
    }


    return 0;
}