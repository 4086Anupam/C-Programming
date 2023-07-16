#include<stdio.h>
// function prototype
int even(int num);
// function call
int main (){
    int num;
    printf ("Enter the num ber \n");
    scanf ("%d",&num);
     even(num);
     return 0;
}
// function defination
int even (int num){
    int i;
    for (i=0;i<=num;i++){
        if (i%2!=0){
            printf ("%d\n",i);
        }
    }
    return 0;
}