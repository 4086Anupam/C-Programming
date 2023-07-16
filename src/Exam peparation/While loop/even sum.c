#include<stdio.h>
int main (){
    int sum , num,i=0;
    printf ("Enter teh number :");
    scanf ("%d",&num);
    while (i<num){
        if (i%2==0){
            sum=sum+i;}
        i++;}
    printf ("%d\n",sum);
    return 0;
}