#include<stdio.h>

int main() {
    int marks;
    printf("Enter the number\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100) {
        printf("Great O");
    } else if (marks >= 80 && marks <= 89) {
        printf("Great E");
    } else if (marks >= 70 && marks <= 79) {
        printf("Great A");
    } else if (marks >= 60 && marks <= 69) {
        printf("Great B");
    } else if (marks >= 50 && marks <= 59) {
        printf("Great C");
    } else if (marks >= 40 && marks <= 49) {
        printf("Great D");
    } else {
        printf("Fail");
    }


    return 0;
}