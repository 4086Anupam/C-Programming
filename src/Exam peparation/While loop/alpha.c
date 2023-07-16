#include<stdio.h>
int main (){
    char letter;
    printf ("Enter alphabet:");
    scanf ("%c",&letter);
    if (letter<'a'||letter>'z'){
        printf ("%c",letter);
        return 0;
    }
    while (letter<='z'){
        printf ("%c\n",letter);
        letter++;
    }
    return 0;
}