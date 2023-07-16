#include<stdio.h>

int main() {
    int num, sum = 0;
    int i = 0;
    scanf("%d", &num);
    while (i <= num) {
        sum =i+1 ;
        i++;
        printf("%d \n", sum);
    }


    return 0;
}