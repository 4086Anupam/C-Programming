#include<stdio.h>

int main() {
    int num1, num2, i, gcd;
    printf("Enter the number \n");
    scanf("%d%d", &num1, &num2);
    for (i = 0; i <= num1 && i <= num2; i++)
        if (num1 % 2 == 0 && num2 % 2 == 0)
gcd=i;

    printf("%d is number \n", gcd);


    return 0;
}