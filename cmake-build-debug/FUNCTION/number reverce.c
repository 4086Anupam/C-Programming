#include<stdio.h>
int rever(int num);
int main (){
    int num;
    printf ("Enter the number \n");
    scanf ("%d",&num);
    rever(num);
    return 0;


}
int rever(int num){
int rem,rev=0;
    while (num != 0) {
        rem = num % 10;//
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("%d revrese ", rev);


    return 0;}