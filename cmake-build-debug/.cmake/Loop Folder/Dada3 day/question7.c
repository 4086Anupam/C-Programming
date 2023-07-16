#include<stdio.h>

int main() {
    int num, i = 1, sum = 0;
    scanf("%d", &num);
    while (i <= num) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i++;
    }
    printf(" sum of even number %d",num, sum);






return 0;
}