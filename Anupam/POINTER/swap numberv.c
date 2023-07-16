#include<stdio.h>
void anu(int*a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    printf ("a=%d\nb=%d",*a,*b);
    return ;
}
int main (){
    int a=9;
    int b=4;
    anu (&a,&b);
    return 0;
}