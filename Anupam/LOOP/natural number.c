#include<stdio.h>

int main() {
    int i, num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++) {
        printf("%d\n", i);
    }


    return 0;
}