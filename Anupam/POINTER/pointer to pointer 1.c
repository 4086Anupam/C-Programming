#include<stdio.h>
int main (){
    int anu=345;
    int *ptr=&anu;
    int ** pptr=&ptr;
    int bhunia = **pptr;
    printf ("%d",bhunia);
    return 0;
}