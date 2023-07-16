#include<stdio.h>
int main (){
    int num,i=0,sum=0;
    printf ("Enter the number :");
    scanf ("%d",&num);
    while (i<=num){
        sum=sum+i;
        i++;}
        printf ("%d\n",sum);

    return 0;
}