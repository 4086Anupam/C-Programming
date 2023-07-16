#include<stdio.H>
int main (){
  char al ;
    printf ("enter the character \n");
    scanf ("%c",&al);
    if (al>='a'&& al<='z'||al>='A'&& al<='Z'){
        printf (" alphabet");
    }
    else {
        printf (" not alphabet");
    }




    return 0;

}