#include<stdio.h>

int main() {
    int i;
    printf("Enter the number \n");
    scanf("&d", &i);
    for (i = 65; i <= 127; i++) {
        printf("%d to %c\n", i, i);
    }


    return 0;
}