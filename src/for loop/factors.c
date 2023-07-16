#include<stdio.h>
int main(){
int i,num;
printf ("Enter the number\n");
scanf ("%d",&num);
printf ("%d",num);
for (i=1;i<=num;i++){
    if (num%i==0){
        printf ("%d",i);
    }
}

   printf ("\n") ;










    return 0;
}