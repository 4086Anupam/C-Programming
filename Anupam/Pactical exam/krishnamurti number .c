#include<stdio.h>
int main (){
    int num,temp,rem,fact,i,sum=0;
    scanf ("%d",&num);
    temp=num;
    while (num!=0){
        fact =1;
        rem=num%10;

        for (i=1;i<=rem;i++)
            fact=fact*i;
        sum=sum+fact;
       num= num/10;
    }
    if (sum==temp){
        printf ("%d krishnamurty number \n",temp,sum);
    }
    else {
        printf (" %d Not krishnamurty number \n",temp,sum);
    }
    return 0;
}