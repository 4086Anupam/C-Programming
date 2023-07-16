#include<stdio.h>
int main (){
    int num;
    int i=0;
    printf ("Enter the number:");
    scanf ("%d",&num);
    while (i<=num){
        if (i%2==0){
            printf ("%d\n",i);

        }

i++;
    }
    return 0;
}