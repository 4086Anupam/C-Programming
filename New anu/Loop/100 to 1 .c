#include<stdio.h>
int main (){
    int i,num;
    printf("Enter number :\n");
    scanf ("%d",&num);
    for (i=100;i>=num;i--){
        printf ("%d\n",i);
    }
    return 0;
}