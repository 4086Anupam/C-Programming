#include<stdio.h>
int main () {
   int a,b,var;
   printf ("Enter the number \n");
   scanf ("%d%d",&a,&b);
   var =a;// var=5
   a=b ; // a=4
   b =var ; // b=5
    printf("change the number%d %d \n",a,b);








    return 0;
}