#include<stdio.h>
int main (){

   int num,rev,rem=0;
   printf ("Enter the number \n");
   scanf ("%d",&num);
   while (num!=0){
    rem=num%10;

    rev=rem*10+num;//rev=0
   num=num/10;}
   printf ("%d is reverce number \n",rev);












    return 0;
}