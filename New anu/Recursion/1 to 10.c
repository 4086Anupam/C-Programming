#include<stdio.h>
void anupam(int x,int num){
    if (x>=num)
        return;
    printf ("%d\n",x);
    return anupam (x+1,num);
}
int main (){
    int num,x;
    printf ("Enter number\n");
    scanf ("%d",&num);
    anupam(x,num);
    return 0;

}