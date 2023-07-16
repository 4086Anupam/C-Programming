#include<stdio.h>

int main() {
    char ch;
    printf("Enter the number \n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'u') {
        printf("this is vowel");
    } else {
        printf("this is consonent");
    }


    return 0;
}