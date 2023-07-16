#include<stdio.h>
int main() {
 int num,fast,last,sum;
 printf ("Enter the number \n");
 scanf ("%d",&num);
 fast =num;
 while (fast>=10){
     fast/=10;}
     last=num%10;

     sum=fast+last;


    printf ("%d\n",sum);











    return 0;
};