#include<stdio.h>
int main (){
    int num,i=1;
    scanf ("%d",&num);
    while (num!=0){
        i=num*i;
       num--;
    }
    printf ("%d",i);
    return 0;
}