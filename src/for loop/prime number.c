#include<stdio.h>
int main(){
int num,i,count=0;
printf ("enter the number \n");
scanf ("%d",&num);
for (i=2;i<=num;i++){
    if (num%i==0){

      count++;
    }
}
 if (count==2)
     printf ("%d is a prime number \n");

  else
      printf ("%d is not prime number \n");






    return 0;
}