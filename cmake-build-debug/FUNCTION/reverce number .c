#include<stdio.h>
int reverce  (int num);
int main (){
    int num;
    printf ("Enter the number \n");
    scanf("%d",&num);
    reverce (num);
    return 0;
}
int reverce (int num){

    int i;
    for (i=num;i>=0;i--){
        printf ("%d\n",i);
    }
    return 0;
}


