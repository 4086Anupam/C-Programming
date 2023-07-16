#include<stdio.h>
void printGd(int num){
    if (num==0)
        return;
    printf ("Good By\n");
    return printGd(num-1);
}
int main (){
    int num;
    printf ("Enter number :\n");
    scanf ("%d",&num);
    printGd(num);
    return 0;
}