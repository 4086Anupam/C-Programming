#include<stdio.h>
int anupam (int num);
int main (){
    int num;
    scanf ("%d",&num);
    anupam(num);
    return 0;
}
int anupam(int num){
    if (num==0){
        return 0;}
    else{
        anupam(num - 1);
        printf("%d", num);}
    }
