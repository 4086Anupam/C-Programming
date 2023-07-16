#include<stdio.h>
int multi(int a,int b);// Function prototype
// function call
int main (){
    int a,b;
    printf ("Enter the number \n");
    scanf ("%d %d",&a,&b);
    multi(a,b);
    return 0;
}
// function defination
int multi(int a, int b){
    int anu;
    anu=a*b;
    printf ("Tne multiply number = ");
    printf ("%d\n",anu);
    return 0;
}