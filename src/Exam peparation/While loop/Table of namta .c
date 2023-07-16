#include<stdio.h>
int main(){
    int i=1,num,multi =0;
    printf ("Enter teh number :");
    scanf ("%d",&num);
    while (i<=10){
        multi=num*i;
        printf ("%d\n",multi);
        i++;
    }
}