#include<stdio.h>

int main() {
    int num1, num2, gcd, i, lcm;
    printf("enter the number \n");
    scanf("%d%d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    lcm = (num1 * num2) / gcd;
    printf("%d and %d is %d", lcm, num1, num2);


    return 0;
}