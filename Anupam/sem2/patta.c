#include<stdio.h>
int main(){
int i,j;
printf ("Enter * pattan\n");
for (i=0;i<=5;i++){
    for (j=0;j<=5;j++){
        if (i>j)
            printf("*",i);
    }
    printf ("\n");
}
return  0;}