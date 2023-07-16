#include<stdio.h>

int main() {
    int age;
    printf("Enter the age:");
    scanf("%d", &age);
    if (age > 18) {
        printf("%d is drive", age);
    } else {
        printf("%d is not drive", age);
    }


    return 0;
}