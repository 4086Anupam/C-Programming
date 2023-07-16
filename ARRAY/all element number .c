//Write a program in C to store elements in an array and print them
#include<stdio.h>

int main() {
    int arr[10];
    int i;
    printf("Element of arry \n");
    // input
    for (i = 0; i < 10; i++) {
        printf("Element %d \n", i);
        scanf("%d", &arr[i]);
    }
// output
    for (i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}