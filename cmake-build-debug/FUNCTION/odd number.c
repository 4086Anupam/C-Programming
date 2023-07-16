#include<stdio.h>
// function prototype
int odd (int a);
// function call
int main (){
    int a;
    printf ("Enter the number \n");
    scanf("%d",&a);
    odd(a);
return 0;
}
int odd(int a){
    if (a%2==0){
        printf (" Even number \n");
    }
    else {
        printf(" odd number \n");
    }
    return 0;
}