#include<stdio.h>
#include<math.h>
int power(int num,int x){
    if (x==0)
    return 1;
    return num* power(num,x-1);
}
int main (){
    int num,x, anu;
    scanf ("%d%d",&num,&x);
   anu= power(num,x);
   printf ("%d",anu);
    return 0;
}