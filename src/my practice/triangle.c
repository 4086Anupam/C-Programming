#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    int area, s;
    printf("Enter the number \n");
    scanf("%d%d%d", &a, &b, &c);
    s = a + b + c / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area of triangle %d", area);


    return 0;
}