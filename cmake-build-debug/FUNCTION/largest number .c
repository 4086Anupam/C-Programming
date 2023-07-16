#include<stdio.h>
int anupam (int a,int b, int c);// function prototype
int main (){// function call
    int a,b,c;
    printf("Enter the number \n");
    scanf ("%d %d %d",&a,&b,&c);
    anupam(a,b,c);
    return 0;
}
// function defination
int anupam(int a,int b, int c){
    if  (a>=b&&a>=c){
        printf ("%d  is the largest number \n",a);
    }
    else if (b>=c&&b>=a){
        printf ("%d is  the largest number \n",b);
    }
    else {
        printf ("%d is  the largest number \n",c);
    }
    return 0;
}

