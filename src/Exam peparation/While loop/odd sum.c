#include<stdio.h>
int main (){
    int sum=0,i=0,num;
    printf ("Enter the number :");
    scanf ("%d",&num);
    while (i<=num){
        if (i%2!=0){
            sum=sum+i;
        }
        i++;
    }
    printf ("%d\n",sum);
    return 0;
}