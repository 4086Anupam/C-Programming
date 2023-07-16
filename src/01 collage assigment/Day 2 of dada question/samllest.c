#include<stdio.h>

int main() {
    int a, b, c;
    printf("enter the number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b &&a<c) {
        printf("%d is small of a ");
    } else if (b < c&&b<a) {
        printf("%d is small of b");
    } else if (c < a&&c<b) {
        printf("%d is small of c");
    } else {
        printf("this is no small number");
    }


    return 0;
}