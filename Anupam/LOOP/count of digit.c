#include<stdio.h>

int main() {
    int i, num,rem, count = 0;
    printf("Enter the number \n");
    scanf("%d", &num);
    while (num != 0) {
        rem = num%10;
        num = num / 10;
        count = count + 1;
    }
    printf("%d\n", count);


    return 0;
}