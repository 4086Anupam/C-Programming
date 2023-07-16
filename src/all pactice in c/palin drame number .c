#include <stdio.h>
int main() {
    int n, temp , reverse = 0, rem;
    printf("Enter a number\n ");
    scanf("%d", &n);
   temp = n;
    while (n != 0) {
      rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    if (temp == reverse) {
        printf("%d is a palindrome number\n", temp);
    } else {
        printf("%d is not a palindrome number\n", temp);
    }

    return 0;
}
