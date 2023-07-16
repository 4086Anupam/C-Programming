#include<stdio.h>
char vowel (char ch);
int main (){
    char ch;
    printf ("Enter the alphabet \n");
    scanf ("%c",&ch);
    vowel (ch);
    return 0;
}
char vowel (char ch){
    if (ch=='a'|| ch=='e'&& ch=='i'||ch=='o'||ch=='u'||ch=='A'|| ch=='E'||ch=='I'||ch=='0'||ch=='U'){

    printf ("%c is vowel\n",ch);}
    else {
        printf("this not vowel \n",ch);
    }
    return 0;
}