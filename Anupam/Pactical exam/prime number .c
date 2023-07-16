#include<stdio.h>
int main (){
    int i=0,num,count=0;
    printf ("Enter The Number :");
    scanf ("%d",&num);
   for (i=0;i<=num;i++){
       if (num%i==0){
           count ++;
       }
       if (count ==2){
           printf (" %d Prime number \n",count );
       }
       else {
           printf (" %d Not prime number \n",count);
       }
   }
    return 0;}