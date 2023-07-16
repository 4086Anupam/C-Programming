#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    // Check if the string is palindrome or not
    j = strlen(string) - 1;
    for (i = 0; i < strlen(string); i++) {
        if (string[i] != string[j]) {
            flag = 1;
            break;
        }
        j--;
    }

    if (flag == 0) {
        printf("%s is a palindrome\n", string);
    } else {
        printf("%s is not a palindrome\n", string);
    }

    return 0;
}
