#include<stdio.h>

int main() {
    int num, sum = 0;
    int i = 1;
    scanf("%d", &num);
    while (i <= num) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("sum odd number between 1 to %d is %d\n", num, sum);


    return 0;
}