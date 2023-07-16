#include<stdio.h>
int sum(int num);
int main (){
    int num , result;
    printf ("Enter the number \n");
    scanf ("%d",&num);
    result=sum( num);
    printf ("%d",result);
    return 0;


}
int sum(int num){
    if (num==1){
        return 1;
    }
    else {
        return num+sum(num-1);
    }
}