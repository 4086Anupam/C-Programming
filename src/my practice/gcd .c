#include<stdio.h>
int gcd (int num1,int num2);
int main (){
    int num1,num2,anu;
    printf ("Enter the num\n");
    scanf("%d%d",&num1,&num2);
    anu=gcd(num1,num2);
    printf ("%d",anu);
    return 0;
}
int gcd(int num1, int num2){
    if (num2==0){
        return num1;
    }
    else {
        return gcd(num1,num2%num1);
    }
}