#include<stdio.h>

int main() {
    int num, sum = 0;
    int last, fast;
    printf("Enter the number \n");
    scanf("%d", &num);
    last = num%=10;

    while (num !=0) {
        fast = num /= 10;}
    { sum = fast + last;



    printf("%d", sum);}


    return 0;
}