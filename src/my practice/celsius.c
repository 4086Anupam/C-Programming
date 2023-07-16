#include<stdio.h>


int main() {
    float celsius, farenheit;
    printf("enter the number \n");
    scanf("%f", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("the temperature %f", farenheit);


    return 0;
}