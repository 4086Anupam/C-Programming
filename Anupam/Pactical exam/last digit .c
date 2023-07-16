#include<stdio.h>
int main (){
    int num1,num2;
    printf("Enter the number :");
    scanf ("%d %d",&num1,&num2);
    if (num1%10==num2%10){
        printf ("Last digit same\n");
    }
    else {
        printf ("Last digit not same \n");
    }
    return 0;
}