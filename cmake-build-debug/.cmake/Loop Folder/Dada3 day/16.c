#include <stdio.h>

int main() {
    int number , reversed  = 0, remainder, original  ;

    printf("Enter thr number: ");
    scanf("%d", &number  );

    original = number ;


    while (number  != 0) {
        remainder = number  % 10;
        reversed  = reversed   * 10 + remainder;
        number  /= 10;
    }


    if (original   == reversed  )
        printf("%d is a palindrome.", original  );
    else
        printf("%d is not a palindrome.", original  );

    return 0;
}





