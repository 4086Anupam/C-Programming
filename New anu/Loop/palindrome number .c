#include<stdio.h>
int main (){
    int temp,num,rev=0,rem;
    printf ("Enter number :\n");
    scanf ("%d",&num);
    temp=num;
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if (temp==rev){
        printf ("Palindrome number\n",temp);
    }
    else {
        printf ("Not palindrome number \n",temp);
    }
    return 0;
}