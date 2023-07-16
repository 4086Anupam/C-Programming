#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the number \n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("swap the number%d\n", a);
    printf("swap the number %d\n", b);


    return 0;
}