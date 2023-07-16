#include<stdio.h>
int main (){
   int num,rem,rev;
   printf ("enter the nunber \n");
   scanf ("%d",&num);
   for (int i=1; i!=0; i++) {
       rem = num % 10;
       rev = rev + (rem * 10);
       num = num / 10;

    printf ("%d is number \n",rev);}







    return 0;
}
