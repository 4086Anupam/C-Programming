#include<stdio.h>
int fibo (int num){
    if (num==1||num==2)
        return 1;
    return fibo(num-1)+fibo (num-2);
}
int main (){
    int num,anu;
    scanf ("%d",&num);
    anu = fibo(num);
    printf ("%d",anu);
    return 0;
}