#include<stdio.h>

int main() {
    /*farenheit to celsius */
    float celsius, farenheit;
    printf("enter the number\n");
    scanf("%f", &farenheit);
    celsius = (farenheit - 32) * 5 / 9;
    printf("the temparture %f\n", celsius);


    return 0;
}