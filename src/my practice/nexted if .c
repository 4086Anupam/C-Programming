#include<stdio.h>

int main() {
    int number;
    printf("Enter the number \n");
    scanf("%d", &number);
    if (number >= 0) {
        printf("positive \n");
        if (number % 2 == 0) {
            printf("Even \n");
        } else {
            printf("odd\n");
        }
    } else {
        printf("Negtative \n");
        if (number % 2 == 0) {
            printf("Even \n");
        } else {
            printf("odd\n");
        }
    }


    return 0;
}