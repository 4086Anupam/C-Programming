#include<stdio.h>
// Function prototype
int add(int a, int b,int c );

// function call
int main (){
    int a,b,c;
    printf ("Enter the number \n");
    scanf ("%d %d %d",& a,& b,&c);
    add( a,b,c);
return 0;}

// function defination
int add(int a,int b,int c){
    int d;
    d=a+b+c;
    printf ("%d\n",d);
    return 0;
}

