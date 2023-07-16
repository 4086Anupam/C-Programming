#include<stdio.h>
int main (){
    int a,b;
    printf ("Enter the number :");
    scanf ("%d %d",&a,&b);
    if (a==30||b==30||a+b== 30){
        printf (" number is true \n");
    }
    else {
        printf (" number is false \n");
    }
    return 0;
}