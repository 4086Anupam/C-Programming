#include<stdio.h>
void anupam (int num){
    if (num==0)
        return ;
     anupam(num-1);
   printf ("%d",num);
    return;
}
int main (){
    int num;
    scanf ("%d",&num);
    anupam(num);
    return 0;
}