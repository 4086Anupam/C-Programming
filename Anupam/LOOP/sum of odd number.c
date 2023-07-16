#include<stdio.h>

int main() {
    int i, num, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (i % 2 != 0)
            sum = sum + i;
    }
    printf("%d\n", sum);


    return 0;
}