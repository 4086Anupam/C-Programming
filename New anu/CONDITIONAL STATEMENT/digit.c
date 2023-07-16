#include<stdio.h>
int main (){
    char ch;
    printf("Enter number:\n");
    scanf ("%c",&ch);
    if (ch>='0'&&ch<='10'){
        printf ("Digit",ch);
    }
    else {
        printf ("Not digit ",ch);
    }
    return 0;
}