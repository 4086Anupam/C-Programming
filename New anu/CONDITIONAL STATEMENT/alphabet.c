#include<stdio.h>
int main (){
    char ch;
    printf ("Enter alphabet :\n");
    scanf ("%c",&ch);
    if (ch>='a'&&ch<='z'){
        printf ("alphabet\n");
    }
    else {
        printf ("not alphabet\n ");

    }
    return 0;
}