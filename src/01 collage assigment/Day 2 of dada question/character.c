#include<stdio.h>
int main (){
    char c;
    printf ("enter the character\n");
    scanf ("%c",&c);
    if (c>='A'&&c<='z'||c>='a'&&c<='z'){
        printf ("%c is alphabet",c);
    }
    else { printf ("%c is not alphabet",c);}






    return 0;

}