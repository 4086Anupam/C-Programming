#include<stdio.h>

int main() {
    int number, rem, count = 0;
    printf("Enter the number \n");
    scanf("%d",&number);
    while (number != 0) {
        rem = number % 10;
        count++;
        number = number / 10;
        //
    }
    printf("%d\n", count);



    return 0;
}