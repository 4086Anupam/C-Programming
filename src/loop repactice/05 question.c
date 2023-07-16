#include<stdio.h>

int main() {
    int i = 0;
    printf("Enter the number ");
    while (i <= 100) {

        if (i % 2 != 0) {
            printf("the odd number %d \n",i);
        }
        printf("%d", i);
        i++;
    }


    return 0;
}