#include<stdio.h>

int main() {
    int  i = 0, sum = 0;
    printf("Enter the number \n");
   // scanf("%d", &num);
    while (i <= 10) {
        if (i % 2 != 0) {
            printf("the odd number %d \n", i);
            sum = sum + i;

        }
        printf("%d\n", sum);
i++;

    }


    return 0;
}