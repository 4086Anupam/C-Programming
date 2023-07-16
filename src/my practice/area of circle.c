#include<stdio.h>
#include<math.h>

int main() {
    float  radius,area;
 const float pi=3.14;
    printf("Enter the number \n");
    scanf("%f",  &radius);
    area = pi * pow(radius, 2);
    printf("area of circle %f", area);


    return 0;
}
