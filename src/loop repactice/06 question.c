#include<stdio.h>

int main() {
    int  i=0, sum = 0;
    printf("Enter the number \n");
   // scanf("%d", &num);
    while (i <= 10) {
        sum=sum+i;
        printf("%d", sum);
        i++;
    }


    return 0;
}