#include<stdio.h>

int main() {
    int a, count=0;
    scanf("%d", &a);
    while (a != 0) {
        a /= 10; //123/10=12
 ++count;
printf ("the digit  %d\n",count);

    }


    return 0;
}