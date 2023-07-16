#include<stdio.h>

int main() {
    char ah;
    printf("enter the charecter\n");
    scanf("%c", &ah);
    if (ah >= 'A' && ah <= 'Z' || ah >= 'a' && ah <= 'z') {
        printf("alphabet ");
    } else if (ah >= '0' && ah <= '9') {
        printf("digit");
    } else {
        printf("special character");
    }


    return 0;
}