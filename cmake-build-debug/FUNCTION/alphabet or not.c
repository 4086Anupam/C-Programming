#include<stdio.h>
char  bhunia (char c );
int main (){
    int c;
    printf ("Enter the alphabet\n");
    scanf ("%c",&c);
    bhunia (c);
    return 0;

}
char bhunia (char c){
    if ((c >='a'&&c <='z')||(c>='A'&&c<='Z')){
        printf ("%c alphabet ",c);
    }
    else {
        printf ("Not alphabet \n");
    }
    return 0;

}