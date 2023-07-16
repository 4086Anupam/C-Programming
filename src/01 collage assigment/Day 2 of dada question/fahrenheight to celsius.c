#include<stdio.h>

int main() {
    float celsius, farenheight;
    printf("enter the number\n");
    scanf("%f", &celsius, &farenheight);
    celsius = ((farenheight - 32) * 5)/9;
    printf("%f is ceisius", celsius);


    return 0;
}