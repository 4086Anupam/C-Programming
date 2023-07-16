#include<stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter the number \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3 && side3 == side1) {
        printf("a");
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("b");
    } else {
        printf("c");
    }


    return 0;
}