#include<stdio.h>
char alpha(char ch );
int main (){
    char ch;
    alpha (ch);
    return 0;

}
char alpha (char ch ){

    for (ch='a';ch<='z';ch++){
        printf ("%c\n",ch);
       }
        return 0;

}

