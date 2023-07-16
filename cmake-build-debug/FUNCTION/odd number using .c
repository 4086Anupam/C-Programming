#include<stdio.h>
// function prototype
int odd(int num);
// function call
int main (){
    int num,i;
    printf ("Enter the number\n");
    scanf ("%d",&num);
    odd(num);
    return 0;
}
// function defination
int odd(int num){
    int i;
    for (i=0;i<=num;i++){
        if (i%2==0)
        printf ("%d\n",i);
       }

    return 0;
}