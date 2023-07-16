#include<stdio.h>

int main() {
    int num, f, c, save, sum=0, rem;
    printf("Enter the number \n");
    scanf("%d", &num);
    save = num;
    while (num > 0) {
        f = 1;
        c = 1;
        rem = num % 10;
        while (c <= rem) {
            f = f * c;
            c++;
        }
        sum = sum + f;
        num = num / 10;
    }
    if (save == sum) {
        printf("this is krishnamurti number \n");
    } else {
        printf("this is no krishnamurti number\n");
    }


    return 0;
}