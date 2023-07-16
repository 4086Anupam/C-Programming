#include<stdio.h>

int main() {
    int num, temp, rem, fact, i, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &num);
    temp = num;
    while (num != 0) {
        rem = num % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
            fact = fact * i;
        sum = sum + fact;
        num = num / 10;
    }
    if (temp == sum) {
        printf("this is krishnsmurti number \n");
    } else {
        printf("this is no krishna murty number \n");
    }


    return 0;
}