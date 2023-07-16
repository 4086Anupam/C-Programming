#include<stdio.h>

int main() {
    char ah;
    printf("Enter the alphabet\n");
    scanf("%c", &ah);
    if (ah >= 'A' && ah <= 'Z' || ah >= 'a' && ah <= 'z') {
        printf("alphabet");
    } else {
        printf("not alphabet");
    }


    return 0;
}