#include<stdio.h>
#include<math.h>
int main() {
    float radius, perimeter;
    const float PI = 3.14159;
    printf("enter the number\n");
    scanf("%f",&radius);
    perimeter = 2 * PI * radius;
    printf(" %.2f the perimeter of circle\n", perimeter);


    return 0;
}