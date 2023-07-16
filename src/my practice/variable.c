#include<stdio.h>
int main(){
 int a,b;
 printf ("Enter the number\n");
 scanf ("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf ("swap this number %d\n",a);
printf("swap this number %d\n",b);



    return 0;
}