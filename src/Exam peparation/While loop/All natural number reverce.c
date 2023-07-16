#include<stdio.h>
int main (){
    int i , num;
    printf ("Enter the number :");
    scanf ("%d",&num);
    i=num;
    while (i>=1){
        printf ("%d\n",i);
        i--;
    }
    return 0;
}