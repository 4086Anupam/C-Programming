#include<stdio.h>

int main() {
    float length, width, area;
    printf("Enter the number \n");
    scanf("%f%f", &width, &length);
    area = length * width;
    printf("%f is rectrangle", area);


    return 0;
}