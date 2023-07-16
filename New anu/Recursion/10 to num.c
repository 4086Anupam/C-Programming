#include<stdio.h>
void anupam(int num){
    if (num==0)
        return ;
    printf ("%d\n",num);
    return anupam(num-1);
}
int main (){
    int num;
    printf ("Enter number \n");
    scanf ("%d",&num);
    anupam(num);
    return 0;
}