#include<stdio.h>
int main (){
    int i=1,num;
    scanf("%d",&num);
    while (num!=0){
       i=num*i;
        num--;
    }
printf ("%d",i);
}