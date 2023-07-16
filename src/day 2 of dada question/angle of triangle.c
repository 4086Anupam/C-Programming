#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter the number\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        printf("this is valid");
    } else {
        printf("this is not valid");
    }


    return 0;
}