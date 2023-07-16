#include<stdio.h>
int sum(int num);
int main (){
    int num;
    printf ("Enter number :\n");
    scanf ("%d",&num);
    sum(num);
    return 0;
}
int sum(int num){
    int i=1,s=0;
    for (i=1;i<=num;i++){
        s=s+i;}
        printf ("%d",s);

    return 0;
}