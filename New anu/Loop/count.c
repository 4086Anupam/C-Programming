#include<stdio.h>
int main (){
    int num,count=0,rem;
    scanf ("%d",&num);
    while (num!=0) {
        rem = num % 10;
        count++;
       num= num / 10;
    }
    printf ("%d",count);
    return 0;

}