// Write a program in C to find the sum of all elements of the array
#include<stdio.h>
int main (){
 int i,num,arr[10] ;
 int sum=0;
 printf ("Size of element of array \n");
 scanf ("%d",&num);
 // input
 for (i=0;i<=num;i++){
     printf ("Element number - %d\n",i);
     scanf ("%d",&arr[i]);
 }
// output
for (i=0;i<=num;i++){
    sum=sum+arr[i];}
    printf ("sum of the arry size = %d\n",sum);








}